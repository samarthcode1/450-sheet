class Solution {
public:

	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	vector<vector<int>> ans;
    int r=grid.size();
    int c=grid[0].size();
    int n=word.size();
    int dx[8] = {0,0,1,-1,1,-1,-1,1};
    int dy[8] = {1,-1,0,0,1,1,-1,-1};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int f=0;
            for(int l=0;l<8 && f==0;l++){
                int p=i;
                int q=j;
                int k=0;
                while(p>=0 && q>=0 && p<r && q<c && k<n && grid[p][q]==word[k])
                {
                    k++;
                    q+=dy[l];
                    p+=dx[l];
                }
                if(k==n)
                {
                    ans.push_back({i,j});
                    f=1;
                }
            }
        }
     }
     return ans;
	}
};