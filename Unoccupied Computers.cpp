class Solution {
  public:
    int solve(int n, string s) {
        // code here
        int ans = 0, count = 0;
        vector<int> temp(26, 0);
        for(auto ch : s){
            if(temp[ch - 'A'] == 1) 
            {
                continue;
            }
            if(temp[ch - 'A'] == 2)  
            {
                count--;
            }
            else{
                if(count >= n){
                    ans++;
                    temp[ch-'A']++;
                }
                else{
                    count++;
                    temp[ch-'A'] = 2;
                }
            }
        }
        return ans;
    }
};