/*You are required to complete this method*/

class Solution{
  public:
  void solve(string &s,int ind,string temp,vector<string>&res,int count,string str){
        if(ind == s.size()){
            if(count==-1 && temp.size()==ind+4){
                temp.pop_back();
                res.push_back(temp);
            }
            return;
        }
        str += s[ind];
        if(str != "" && stoi(str) > 255) return;
        if(str[0]=='0' &&  str.size()>1){
            return;
        }
        solve(s,ind+1,temp,res,count,str);
        solve(s,ind+1,temp+str+'.',res,count-1,"");
    }
    vector<string> genIp(string &s) {
        vector<string>res;
        string temp;
        solve(s,0,temp,res,3,"");
        return res;
    }
//   bool check(string s){
//       int n=s.length();
//       if(n<=0 || n>3){
//           return false;
//       }
//       if(s[0]=='0' && n>1){
//           return false;
//       }
//     int x = stoi(s);
//       if(x<0 || x>255){
//           return false;
//       }
//       return true;
//   }
//   string generate(int n,string &s,int i,int j,int k){
//       string s1=s.substr(0,i+1);
//       string s2=s.substr(i+1,j-i);
//       string s3=s.substr(j+1,k-j);
//       string s4=s.substr(k+1,n-1-k);
//       if(check(s1) && check(s2) && check(s3) && check(s4)){
//           return s1+"."+s2+"."+s3+"."+s4+".";
//       }
//       return "-1";
//   }
//     vector<string> genIp(string &s) {
//         // Your code here
//         int n=s.length();
//         vector<string>v;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     string s=generate(n,s,i,j,k);
//                     if(s.size()>0){
//                         v.push_back(s);
//                     }
//                 }
//             }
//         }
//         return v;
//     }

};