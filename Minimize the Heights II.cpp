// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
        int mini=arr[0];
        int maxi=arr[n-1];
        for(int i=1;i<n;i++){
             if (arr[i] - k < 0){
                continue; 
             }   
            mini = min(arr[0] + k, arr[i] - k);
            maxi = max(arr[i - 1] + k, arr[n - 1] - k);
            diff=min(diff,maxi-mini);
        }
        return diff;
    }
};s