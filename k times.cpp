class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(arr[i]);
        }
        int temp=n/k;
        unordered_map<int,int>mp;
        for(auto i:v){
            mp[i]++;
        }
        int count=0;
        for(auto i:mp){
            if(i.second>temp){
                count++;
            }
        }
        return count;
    }
};