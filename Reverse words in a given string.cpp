
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string s=S;
        string str = "";
        int first = 0;
        int length = s.length();
        while(s[first] == '.'){
            first++;
        }
        if(first == length){
            return "";
        }

        int index = first;

        while(index<length){
            if(s[index] == '.'){
                while(s[index] == '.'){
                    index++;
                }
                str = str + '.';
                continue;
            }
            str = str + s[index];
            index++;
        }

        reverse(str.begin(), str.end());
        str = str + '.';
        int front = 0;
        int last = 0;
        while(front <= last && last < str.length()){
            while(str[front] != '.'){
                front++;
            }
            reverse(str.begin() + last, str.begin() + front);
            last = front+1;
            front++;
        }

        if(str[0] == '.'){
            str = str.substr(1);
        }
        
        if(str[str.length()-1] == '.'){
            str = str.substr(0, str.length()-1);
        }
        return str;
    } 
};