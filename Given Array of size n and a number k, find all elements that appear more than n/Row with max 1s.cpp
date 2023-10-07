//User function template for C++
class Solution{
public:
    int findOne(vector<int>arr,int n,int x){
        int l=0;
        int h=n-1;
        int ans=n;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]>=x){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int count_max=0;
	    int position=-1;
	    for(int i=0;i<n;i++){
	        int count_one=m-findOne(arr[i],m,1);
	       // cout<<findOne(arr[i],m,1)<<endl;
	       // cout<<count_one<<endl;
	       // cout<<endl;
	        if(count_max<count_one){
	            count_max=count_one;
	            position=i;
	        }
	    }
	    return position;
	}

};