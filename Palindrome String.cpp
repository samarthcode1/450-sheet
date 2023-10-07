//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    stack<char>s;
	    string st="";
	    for(int i=0;i<S.length();i++){
	        s.push(S[i]);
	    }
	    while(!s.empty()){
	        st+=s.top();
	        s.pop();
	    }
	    if(st==S){
	        return 1;
	    }
	    return 0;
	}

};