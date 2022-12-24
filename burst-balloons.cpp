#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<int>&arr, vector<vector<int>>&dp)
      {
          if(i>j) return 0;
          if(dp[i][j]!=-1) return dp[i][j];
          
          int maxi = INT_MIN;
          
          for(int k=i;k<=j;k++){
              int ans = arr[i-1]*arr[k]*arr[j+1]+solve(i, k-1, arr,dp)+ solve(k+1, j, arr,dp); 
              maxi = max(ans, maxi);
          }
          return dp[i][j]=maxi;
      }

    int maxCoins(int N, vector<int> &arr) {
        // code here
        int n=arr.size();
        arr.push_back(1);
        arr.insert(arr.begin()+0,1);
        vector<vector<int>>dp(n+2, vector<int>(n+2,-1));
        return solve(1, n, arr,dp);
    }