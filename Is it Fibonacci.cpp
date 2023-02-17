 long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        long long int sum=0;
        queue<long long int>q;
        for(auto num:GeekNum){
            q.push(num);
            sum+=num;
        }
        
        if(N<=K) return GeekNum[N-1];
        long long curr;
        for(int i=K;i<N;i++){
            curr=sum;
            q.push(curr);
                sum+=curr;
                sum-=q.front();
                q.pop();
            }
        return curr;
    }