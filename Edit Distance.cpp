class Solution {
  public:
  int solveTab(string a,string b){
    vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
    for(int j=0;j<b.length();j++)
    {
        dp[a.length()][j]=b.length()-j;
    }
    for(int j=0;j<a.length();j++)
    {
        dp[j][b.length()]=a.length()-j;
    }
    for(int i=a.length()-1;i>=0;i--){
        for(int j=b.length()-1;j>=0;j--){
            int ans=0;
            if(a[i]==b[j])
            {
                ans=dp[i+1][j+1];
            }
            else{
                int insertAns=1+dp[i][j+1];
                int deleteAns=1+dp[i+1][j];
                int replaceAns=1+dp[i+1][j+1];
                ans=min(insertAns,min(deleteAns,replaceAns));
            }
            dp[i][j]=ans;
        }
    }
        return dp[0][0];
}
    int editDistance(string s, string t) {
        // Code here
        int n1=s.length();
        int n2=t.length();
        // vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return solveTab(s,t);
    }
};