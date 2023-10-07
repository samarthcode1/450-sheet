class Solution
{
	public:
	    void backtrack(string& s, int l,int r,set<string> &st){
	        if(l==r){
	            st.insert(s);
	        }
	        else{
	            for(int i=l;i<=r;i++){
		            swap(s[l],s[i]);
		            backtrack(s,l+1,r,st);
		            swap(s[l],s[i]);
		        }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string>st;
		    string s=S;
		    int start=0,end=s.length()-1;
		    backtrack(s,start,end,st);
		    vector<string>v(st.begin(),st.end());
		    
		    return v;
		    
		}
};
