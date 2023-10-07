
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            int front=0;
            int last=n-1;
            while(front<last){
                swap(matrix[front][i],matrix[last][i]);
                front++;
                last--;
            }
        }
        
    } 
};