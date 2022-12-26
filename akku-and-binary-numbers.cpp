 long long solve(long long l, long long r){
        // Code Here
         long int ans=0;
        for(int i=0;i<63;i++){
            for(int j=i+1;j<63;j++){
                for(int k=j+1;k<63;k++){
                    long int current=0;
                    current|=(1L<<i);
                    current|=(1L<<j);
                    current|=(1L<<k);
                    if(current>=l && current<=r) ans++;
                }
            }
        }
        return ans;
    }