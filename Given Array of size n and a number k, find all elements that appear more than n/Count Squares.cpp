class Solution {
  public:
    int countSquares(int N) {
        // code here
        int x=1,count=0;
        while(x*x<N){
            count++;
            x++;
        }
        return count;
    }
};