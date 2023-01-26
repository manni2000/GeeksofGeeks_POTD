 #include<bits/stdc++.h>
 using namespace std;
 
 string caseSort(string str, int N)
    {
        // your code here
        vector<char>small;
        vector<char>caps;
        
        for(int i=0;i<str.size();i++){
            if(int(str[i])>=97){
                small.push_back(str[i]);
            }
            else{
                caps.push_back(str[i]);
            }
        }
        
        sort(small.begin(),small.end());
        sort(caps.begin(),caps.end());
        
        int m=0;
        int n=0;
        
        for(int i=0;i<str.size();i++){
            if(int(str[i])>=97){
               str[i]=small[m];
               m++;
            }
            else{
              str[i]=caps[n];
              n++;
            }
        }
        return str;
    }