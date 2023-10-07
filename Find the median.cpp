class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n=v.size();
		    if(n%2==0){
		        int first=v[n/2];
		        int second=v[(n/2)-1];
		        int avg=(first+second)/2;
		        return avg;
		    }
		    else{
		        return v[n/2];
		    }
		}
};