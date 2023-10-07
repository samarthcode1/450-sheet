class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        // string s="";
        // vector<char>v,v1;
        // int n=S.size();
        // for(int i=0;i<n;i++){
        //     v.push_back(S[i]);
        // }
        // // for(int i=0;i<v.size();i++){
        // //     cout<<v[i]<<" ";
        // // }
        // for(int i=0;i<=v.size();i++){
        //     if(v[i]==v[i+1]){
        //         v.erase(v.begin()+i);
        //     }
        //     else{
        //         v1.push_back(v[i]);
        //     }
        // }
        // for(int i=0;i<v.size();i++){
        //     s+=v1[i];
        // }
        // return s;
        // // stack<char>st;
        // // st.push(S[0]);
        // // for(int i=1;i<n;i++){
        // //     if(st.top()==S[i]){
        // //         s+=S[i];
        // //     }
        // //     else{
                
        // //     }
        // // }
        string str ="" ;
    
        for(int i = 0; i<S.size() ; i++)
        {
            if(S[i]!=S[i+1])
            
            {
                str.push_back(S[i]);
            }
        
        }
        
       return str;
        
    
    }
};