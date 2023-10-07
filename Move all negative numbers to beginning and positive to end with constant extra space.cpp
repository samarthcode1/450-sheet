//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>v1,v2;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	           v1.push_back(arr[i]); 
	        }
	        else{
	            v2.push_back(arr[i]);
	        }
	    }
	   // for(int i=0;i<v1.size();i++){
	   //     cout<<v1[i]<<" ";
	   //}
	   //cout<<endl;
	   //for(int i=0;i<v2.size();i++){
	   //     cout<<v2[i]<<" ";
	   //}
	   //cout<<endl;
	    int j=0;
	    for(int i=0;i<v1.size();i++){
	        arr[j]=v1[i];
	        j=j+2;
	    }
	   // for(int i=0;i<n;i++){
	   //     cout<<arr[i]<<" ";
	   //}
	   //cout<<endl;
	    int k=1;
	    for(int i=0;i<v2.size();i++){
	        arr[k]=v2[i];
	        k=k+2;;
	    }
	}
};