class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        int sum=0;
        int i=0;
        int mini=INT_MAX;
        for(int low=0;low<n;low++){
            sum+=arr[low];
            while(sum>x && i<=low){
                mini=min(mini,low-i+1);
                sum-=arr[i];
                i++;
            }
        }
        if(mini==INT_MAX){
            return 0;
        }
        else{
            return mini;
        }
    }
};