 int removeStudents(int H[], int N) {
        // code here
        vector<int> arr;
        
        for(int i=0;i<N;i++){
            int x = lower_bound(arr.begin(),arr.end(), H[i])-arr.begin();
            
            if(x==arr.size()){
                arr.push_back(H[i]);
            }
            else
            {
                arr[x]=H[i];
            }
        }
        return N-arr.size();
    }