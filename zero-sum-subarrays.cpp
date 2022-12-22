 long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
     
    unordered_map<int,int>map;
        int sum=0, count=0;
        map[0]=1;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(map.find(sum)!=map.end()){
                count+=map[sum];
            }
            map[sum]++;
        }
       return count; 
    }