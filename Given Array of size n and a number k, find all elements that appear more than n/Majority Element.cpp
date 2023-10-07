//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int candidate = -1;
    int count = 0;
     for(int i=0;i<size;i++){
         if(count==0){
             candidate=a[i];
             count=1;
         }else if(candidate==a[i]){
             count++;
         }else{
             count--;
         }
     }
     count=0;
     for(int i=0;i<size;i++){
         if(a[i]==candidate){
             count++;
         }
     }
     if(count>size/2){
         return candidate;
     }else{
         return -1;
     }


        // unordered_map<int,int>mp;
        // for(int i=0;i<size;i++){
        //     mp[a[i]]++;
        // }
        // for(auto i:mp){
        //     if(i.second>size/2){
        //         return i.first;
        //     }
        // }
        // return -1;
        
        // your code here
        
    }
};