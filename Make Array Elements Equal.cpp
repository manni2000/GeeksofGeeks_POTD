 long long int minOperations(int N) {
        // Code here
        if(N == 1) return 1;
        
        long long int cn = N;
        long long int hn = N/2;
        
        long long int res = hn*cn - hn*hn;
        return res;
    }