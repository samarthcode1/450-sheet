class Solution {
  public:
    string longestPalin (string S) {
        string s=S;
        // code here
        if(s.length()<=1){
            return s;
        }
        int n=s.length();
        int max_len=1;
        int low=0,high=0;
        //for odd-starting from the center to the starting and the end
        for(int i=0;i<n;i++){
            int l=i,h=i;
            while(l>=0 && h<n){
                if(s[l]==s[h]){
                    l--,h++;
                }
                else{
                    break;
                }
            }
            int len=h-l-1;
            if(len>max_len){
                max_len=len;
                low=l+1;
                high=h-1;
            }
        }
        for(int i=0;i<n-1;i++){
            int l=i,h=i+1;
            while(l>=0 && h<n){
                if(s[l]==s[h]){
                    l--,h++;
                }
                else{
                    break;
                }
            }
            int len=h-l-1;
            if(len>max_len){
                max_len=len;
                low=l+1;
                high=h-1;
            }
        }
        // return max_len;
        return s.substr(low,max_len);
    }
};