long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long long ans=0;
        int totalstick=0;
        
        int mn=INT_MAX;
        
        for(int i=0;i<N;i++){
            int len=A[i];
            int stick=B[i];
            
            if(stick%2!=0){
                stick--;
            }
            
            if(stick>=2){
                mn=min(mn,len);
            }
            
            ans+=(len*stick);
            totalstick+=stick;
        }
        
        if(totalstick%4!=0){
           ans-=(2*mn); 
        }
        return ans;
    }