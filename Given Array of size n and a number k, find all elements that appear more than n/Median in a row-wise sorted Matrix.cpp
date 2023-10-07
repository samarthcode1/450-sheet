//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &mat, int r, int c){
        // code here     
        int min=mat[0][0],max=mat[0][c-1] ;
        for(int i=1;i<r;i++){
            if(mat[i][0]<min){min=mat[i][0];}
            if(mat[i][c-1]>max){max=mat[i][c-1];} 
        } 
        
        int medPos=(r*c+1)/2; 
        
        while(min<max){
            int mid=(min+max)/2; 
            int midPos=0; 
            for(int i=0;i<r;i++){
                midPos+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin(); 
            } 
            if(midPos<medPos){
                min=mid+1; 
            } 
            else{
                max=mid; 
            }
        } 
        return min;
    }
};