
class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        transform(A.begin(), A.end(), A.begin(), ::tolower);
        transform(B.begin(), B.end(), B.begin(), ::tolower);
        // B=tolower(B);
        int count=0;
        for(int i=0;i<A.length();i++){
            if(A[i]==B[i]){
                count++;
            }
        }
        return count;
    }
};