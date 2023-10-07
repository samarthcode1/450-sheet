class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        if(m==0 || n==0){
            return 0;
        }
        
        sort(a.begin(),a.end());
        // for(int i=0;i<a.size();i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        int min_diff=INT_MAX;
        for(int i=0;m-1+i<n;i++){
            int mini=a[i];
            int maxi=a[m-1+i];
            int diff=maxi-mini;
            // cout<<diff<<" "<<mini<<" "<<maxi<<endl;
            if(diff<min_diff)
            {
                min_diff=diff;
            }
        }
        
        return min_diff;
    
    }   
};