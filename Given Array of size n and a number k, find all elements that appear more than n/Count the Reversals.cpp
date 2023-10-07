

int countRev (string s)
{
    // your code here
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    int o=0,c=0;
    while(!st.empty()){
        if(st.top()=='{'){
            o++;
        }
        else{
            c++;
        }
        st.pop();
    }
    if((o+c)%2!=0){
        return -1;
    }
    int result=(o+1)/2+(c+1)/2;
    return result;    

    
    
    
}