class Solution
{
    public:
    vector<int>v;
    int first(int arr[], int x, int n)
    {
        int low = 0, high = n - 1, res = -1;
        while (low <= high) {
 
        int mid = (low + high) / 2;
 
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
                low = mid + 1;
         else {
                res = mid;
                high = mid - 1;
            }
        }
        v.push_back(res);
    }
    int last(int arr[], int x, int n)
    {
        int low = 0, high = n - 1, res = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > x)
                high = mid - 1;
            else if (arr[mid] < x)
                low = mid + 1;
            else {
                res = mid;
                low = mid + 1;
            }
        }
        v.push_back(res);
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        first(arr, x, n);
        last(arr, x, n);
        return v;
        
    }
};