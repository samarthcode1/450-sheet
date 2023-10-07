

//User function Template for C++

void rotate(int arr[], int n)
{
    int a[n];
    int temp=arr[n-1];
    for(int i=0;i<n;i++){
        a[i+1]=arr[i];
    }
    a[0]=temp;
    memcpy(arr,a,sizeof(a));
}