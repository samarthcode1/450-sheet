/*Complete the function below*/

class Solution {
public:
    // string  
    bool check(int a){
        string s=to_string(a);
        int len=s.length();
        for(int i=0;i<len/2;i++){
            if(s[i]!=s[len-i-1]){
                return false;
            }
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	int temp;
    	for(int i=0;i<n;i++){
    	    if(check(a[i])==false){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};