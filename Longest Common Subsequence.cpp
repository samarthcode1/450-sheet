
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string text1, string text2)
    {
        // your code here
        int s1=text1.size();
        int s2=text2.size();
        int mat[s1+1][s2+1];
        for(int i=0;i<=s1;i++){
            for(int j=0;j<=s2;j++){
                if(i==0 || j==0){
                    mat[i][j]=0;
                }
                else if(text1[s1-i]==text2[s2-j]){
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else{
                    int left=mat[i-1][j];
                    int up=mat[i][j-1];
                    int dia=mat[i-1][j-1];
                    mat[i][j]=max(left,max(up,dia));
                }
            }
        }
        return mat[s1][s2];
    }
};