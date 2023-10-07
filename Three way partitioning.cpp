//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        //TLE
        // sort(array.begin(),array.end());
        int n=array.size();
        // int j=0;
        // for(int i=0;i<n;i++){
        //     if(array[i]<=a){
        //         array[j]=array[i];
        //         j++;
        //     }
        //     if(array[i]>a && array[i]<b){
        //         array[j]=array[i];
        //         j++;
        //     }
        //     if(array[i]>=b){
        //         array[j]=array[i];
        //         j++;
        //     }
        // }
        
        
        int start = 0, end = n - 1;
 
    for (int i = 0; i <= end;) {
        if (array[i] < a) {
            
            if (i == start) {
                start++;
                i++;
            }
            else
                swap(array[i++], array[start++]);
        }
 
        else if (array[i] > b)
            swap(array[i], array[end--]);
 
        else
            i++;
    }
        
    }
};
