//User function Template for C++
class Solution{
    public:
    vector<vector<string>>v1;
    void rec(vector<string>& v2,vector<vector<string>>&list,int i){
        if(i==list.size()){
            v1.push_back(v2);
            return;
        }
        for(int k=0;k<list[i].size();k++){
            v2.push_back(list[i][k]);
            rec(v2,list,i+1);
            v2.pop_back();
        }
    }
    vector<vector<string>> sentences(vector<vector<string>>&list){
        //Write your code here
        vector<string>v2;
         rec(v2,list,0);
        return v1;
    }
};