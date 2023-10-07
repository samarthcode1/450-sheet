class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        // unordered_map<char,int>mp,mp1;
        // for(auto i:str){
        //     mp[i]++;
        // }
        // int res=INT_MAX;
        // int n=mp.size();
        // int last=0,i=0;
        // while(last<str.length()){
        //     mp1[str[last]]++;
        //     while(n==mp1.size()){
        //         res=min(res,last-i+1);
        //         mp1[str[i]]--;
        //         if(mp1[str[i]]==0){
        //             mp1.erase(str[i]);
        //             i++;
        //         }
        //     }
        //     last++;
        // }
        
        // return res;
        unordered_map<char,int>map,map1;
        for(auto it:str)map[it]++;
        int i=0,j=0,ans=INT_MAX;
        
        while(j<str.size())
        {
            map1[str[j]]++;
            
            while(map1.size()==map.size())
            {
                ans=min(ans,j-i+1);
                map1[str[i]]--;
                if(map1[str[i]]==0)map1.erase(str[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};