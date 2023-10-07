
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>v;
        unordered_map<string,vector<string>>mp;
        int n=string_list.size();
        for(auto i:string_list){
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        for(auto i:mp){
            v.push_back(i.second);
        }
        return v;
    }
};