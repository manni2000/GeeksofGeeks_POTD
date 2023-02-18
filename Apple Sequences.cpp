int appleSequences(int n, int m, string arr){
        int maxlen=0;
        int end=0,start=0;
        int count=0;
        while(end<n) //0<5
        {
            if(arr[end]=='O') count++; //count=1,
            while(start<n && count>m)  // 0<n && 1>1
            {
                if(arr[start]=='O') count--;
                start++;
            }
            maxlen=max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }