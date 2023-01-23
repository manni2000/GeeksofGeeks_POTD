string removePair(string s) {
        // code here
        string ans;
        for(int i=0;i<s.size();i++){
            if(ans.empty()){
                ans.push_back(s[i]);
            }
            else if(!ans.empty() && ans.back()==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        if(ans.empty()) return "-1";
        else return ans;
    }