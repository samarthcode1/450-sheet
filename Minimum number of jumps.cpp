// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        for(int i=1;i<n;i++){
            arr[i]=max(arr[i]+i,arr[i-1]);
        }

        int i=0;
        int count=0;
        while(i<n-1){
            count++;
            i=arr[i];    
        }
        return count;
    }
};