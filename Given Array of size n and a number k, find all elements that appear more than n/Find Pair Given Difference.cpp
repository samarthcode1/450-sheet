

bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int l=0,r=1;
    while(l<=r && r<size){
        int diff=arr[r]-arr[l];
        if(diff==n && l!=r){
            return true;
        }
        else if(diff>n){
            l++;
        }
        else{
            r++;
        }
    }
    return false;
}