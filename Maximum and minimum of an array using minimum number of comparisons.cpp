//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	sort(A,A+N);
    	int mini=A[0];
    	int maxi=A[N-1];
    	return maxi+mini;
    }

};