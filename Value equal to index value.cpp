//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            v.push_back(i+1);
	        }
	    }
	    return v;
	}
};