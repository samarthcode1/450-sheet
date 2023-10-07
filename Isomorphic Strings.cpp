class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    static bool cmp(pair<char, int>& a,pair<string, int>& b)
    {
        return a.second < b.second;
    }   
    bool areIsomorphic(string s, string t)
    {
        
        // Your code here   
        // unordered_map<char,int>mp1,mp2;
        // for(auto i:str1){
        //     mp1[i]++;
        // }
        // vector<pair<char, int> > v1;
        // for(auto i:mp1){
        //     v1.push_back(i);
        // }
        // sort(v1.begin(),v1.end(),cmp);
        // for(auto i:str2){
        //     mp2[i]++;
        // }
        // vector<pair<char, int> > v2;
        // for(auto i:mp2){
        //     v2.push_back(i);
        // }
        // sort(v2.begin(),v2.end(),cmp);
        // for(int i=0;i<mp1.size();i++){
        //     if(mp1[i]!=mp2[i]){
        //         return 0;
        //     }
        // }
        // return 1;
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,char> mp1;
        unordered_map<char,bool> mp2;
        for(int i=0;i<s.length();i++)
        {
            // char ch1 = s[i];
            // char ch2 = t[i];
            if(mp1.count(s[i]))
            {   
                if(mp1[s[i]] != t[i])
                  return false;
            }
            else{
                if(mp2.count(t[i]) && mp2[t[i]])
                  return false;
                else
                  mp1[s[i]] = t[i];
                  mp2[t[i]] = true;
            }
        }
        return true;
    }
};