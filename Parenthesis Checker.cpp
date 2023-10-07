
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        string s=x;
        stack<char> st;
        for(auto i:s)
        {
            if(i=='(' || i=='{' || i=='[') {
                st.push(i);
            }
            else              {
                if(st.empty() || (st.top()=='(' && i!=')') || (st.top()=='{' && i!='}') || (st.top()=='[' && i!=']')) 
                return false;
                st.pop();
            }
        }
        return st.empty();
    }

};