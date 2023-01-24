	void convert(int arr[], int n) {
	    // code here
	    vector<int>v(arr,arr+n);
	    sort(v.begin(),v.end());
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[v[i]]=i;
	    }
	    
	    for(int i=0;i<n;i++){
	        arr[i]=mp[arr[i]];
	    }
	}