class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        int i=0;
        while(i<s.size()){
            char c=s[i];
            st.push(c);
            i++;
        }
        s.clear();
        while(!st.empty()){
            char c=st.top();
            s.push_back(c);
            st.pop();
        }
        return;
    }
};