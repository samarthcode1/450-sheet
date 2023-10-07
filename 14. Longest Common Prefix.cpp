class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int length=strs.size();
        sort(strs.begin(),strs.end());
        string first=strs[0],sec=strs[length-1];
        for(int i=0;i<first.size();i++){
            if(first[i]==sec[i]){
                ans+=first[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};