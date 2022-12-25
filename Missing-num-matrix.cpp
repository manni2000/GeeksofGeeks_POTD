#include<bits/stdc++.h>
using namespace std;

// Function to check if the row, column and diagonals have equal sum
bool isValid(vector<vector<int>> &matrix, int n)
{
    // Calculate sum of first row
    int r1 = 0;
    for (int i = 0; i < n; i++)
    {
        r1 += matrix[0][i];
    }

        // Check if all other rows have same sum as first row
        for(int i = 1; i < n; i++)
    {
        int r = 0;
        for (int j = 0; j < n; j++)
        {
            r += matrix[i][j];
        }
        if (r != r1)
            return false;
    }

    // Check if all columns have same sum as first row
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            c += matrix[j][i];
        }
        if (c != r1)
            return false;
    }

    // Check if both diagonals have same sum as first row
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        d1 += matrix[i][n - i - 1];
        d2 += matrix[i][i];
    }
    return (d1 == r1 && d2 == r1);
}

// Function to find the positive number to be placed in place of the 0
int MissingNo(vector<vector<int>> &matrix)
{
    // Find the 0 in the matrix
    int n = matrix.size();
    int r, c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                r = i;
                c = j;
            }
        }
    }

        // Calculate the sum needed for the row, column and diagonals to be equal
        int ans = 0;
    if (r == 0)
    { // If 0 is in first row
        for (int i = 0; i < n; i++)
        {
            ans += (matrix[1][i] - matrix[0][i]);
        }
        matrix[r][c] = ans;
    }
    else
    { // If 0 is not in first row
        for (int i = 0; i < n; i++)
        {
            ans += (matrix[0][i] - matrix[r][i]);
        }
        matrix[r][c] = ans;
    }

    // Check if the sum is positive and the matrix is valid
    if (ans > 0 && isValid(matrix, n))
        return ans;
    return -1;
}