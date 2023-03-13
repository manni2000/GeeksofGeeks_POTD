#include <bits/stdc++.h>
using namespace std;

vector<int> findMaxRow(vector<vector<int>> mat, int N)
{
    // code here
    vector<int> ans;
    int row = 0, maxrows = 0;
    for (int i = 0; i < N; i++)
    {
        int cnt = 0;
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j] == 1)
            {
                cnt++;
            }
        }
        if (cnt > maxrows)
        {
            row = i;
            maxrows = cnt;
        }
    }
    ans.push_back(row);
    ans.push_back(maxrows);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> arr(N, vector<int>(N));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> arr[i][j];
            }
        }
        vector<int> ans = findMaxRow(arr, N);
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}