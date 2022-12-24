class Solution{
    public:
        long long int wineSelling(vector<int> &arr,int size){
            long long ans=0;
            int s=0,b=0;
            while(1) {
                while(arr[s]<=0 && s<size) {
                    s++;
                }
                while(arr[b]>=0 && b<size) {
                    b++;
                }
                if(s==size || b==size) {
                    break;
                }
                int x=min(arr[s],-arr[b]);
                arr[s]-=x;
                arr[b]+=x;
                ans+=x*abs(s-b);
            }
            return ans;
        }
};