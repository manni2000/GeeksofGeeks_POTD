 int inSequence(int A, int B, int C){
        // code here
        if(C>0 && B<A) return 0;
        
        if(C<0 && A<B) return 0;
        
        if(C==0) return A==B?1:0;
        
        int n=B-A;
        if(n%C==0){ return 1; }
        
        return 0;
    }