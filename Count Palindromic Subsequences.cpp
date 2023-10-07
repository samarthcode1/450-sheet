class Solution{
    public:
    /*You are required to complete below method */
    // long long dp[1000][1000];
    // int m=1e9+8;
    // int fun(int i,int j,string str){
    //     if(i>j){
    //         return 0;
    //     }
        
    //     if(dp[i][j]!=-1){
    //         return dp[i][j];
    //     }
    //     if(i==j){
    //         return dp[i][j]=1;
    //     }
        
    //     else if(str[i]==str[j]){
    //         return dp[i][j]=(fun(i+1,j,str)%m+fun(i,j-1,str)%m)%m+1;
    //     }
    //     else{
    //         return dp[i][j]=(fun(i+1,j,str)%m+fun(i,j-1,str)%m-fun(i+1,j-1,str)%m)%m;
    //     }
    // }
    // long long int  countPS(string str)
    // {
       //Your code here
    //   int n=str.length();
    //   memset(dp,-1,sizeof(dp));
    //   return fun(0,n-1,str);
    int mod = 1e9+7;
    long long int  countPS(string str)
    {
       //Your code here
       int n=str.size();
         vector<vector<int>>dp(n,vector<int>(n,0));
         
         for(int i=0; i<n; i++)dp[i][i]=1;
         
        for(int i=n-2; i>=0; i--)
        {
            for(int j=i+1;j<n;j++)
            {
                dp[i][j] = dp[i+1][j]+dp[i][j-1];
                if(str[i]==str[j]) dp[i][j]++;
                else dp[i][j]-=dp[i+1][j-1];
                dp[i][j] = (dp[i][j]<0 ?dp[i][j]+mod : dp[i][j]%mod);
                
            }
        }
         return dp[0][n-1];
    }
     
};