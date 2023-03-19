 #include<bits/stdc++.h>
 using namespace std;
 
 vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        unordered_set<int> st;
        vector<int>ans(N);
        for(int i=0;i<N;i++){
            ans[i]=st.size(); //0,1,2
            st.insert(A[i]);  //4,3,no entry
        }
        st.clear();  
        for(int i=N-1;i>=0;i--){
            ans[i]-=st.size(); //2-0=2,1-1=0,0-1=-1
            st.insert(A[i]);
        }
        return ans;
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int>A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
      vector<int>ans=getDistinctDifference(N,A);
      cout<<ans;
    }
}