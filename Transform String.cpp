class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        vector<int>v1(256,0);
        vector<int>v2(256,0);
        if(A.length()!=B.length())
        {
            return -1;
        }
        for(auto it:A){
            v1[it]++;
        }
        for(auto it:B){
            v2[it]++;
        }
        for(int i=0;i<256;i++){
            if(v1[i]!=v2[i])
              return -1;
        }
        int count=0;
        int i=A.length()-1;
        int j=B.length()-1;
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else {
                count++;
                i--;
            }
            
        }
        return count;    }
};