class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int n=str.length();
        int ans=0;
     int i=0;
     stack<int>s;
     s.push(str[i]);
     i++;
     while(i<str.size()){
        while(i<str.size()&&s.size()&&i<str.size()&&(s.top()!=str[i])){
            s.pop();
            i++;
        }
        if(s.empty()){
            ans++;
        }
        while((i<str.size())&&(s.empty()||s.top()==str[i])){
            s.push(str[i]);
            i++;
        }
     }
     if(s.empty())
     return ans;
     return -1;
     
    }
};