
class Solution
{
    #define d 256
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
            vector<int>v;
            int q=INT_MAX;
            int m=pat.length();
            int n=txt.length();
            int i,j,p=0,t=0,h=1;
            for(i=0;i<m-1;i++){
                h=(h*d)%q;
            }
            for(i=0;i<m;i++){
                p=(d*p+pat[i]%q);
                t=(d*t+txt[i]%q);
            }
            for(i=0;i<=n-m;i++){
                if(p==t){
                    for(j=0;j<m;j++){
                        if(txt[i+j]!=pat[j]){
                            break;
                        }
                    }
                    if(j==m){
                        v.push_back(i+1);
                    }
                    
                }
                if(i<n-m){
                    t=(d*(t-txt[i]*h)+txt[i+m]%q);
                    if(t<0){
                        t=t+q;
                    }
                }
            }
            if(v.size()==0){
                v.push_back(-1);
                return v;
            }
            return v;
        }
     
};