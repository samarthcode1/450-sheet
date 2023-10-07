// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>v;
        int r=Mat.size();
        int c=Mat.size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v.push_back(Mat[i][j]);
            }
        }
        sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        int k=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                Mat[i][j]=v[k++];
            }
        }
        return Mat;
    }
};