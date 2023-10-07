// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // sort(intervals.begin(), intervals.end());
        // int size = intervals.size();
        // for(int i = 0; i<size; i++){
        //     int front = i;
        //     int last = i+1;
        //     if(intervals[front][0] == -1){
        //         continue;
        //     }
        //     while(front != size && last != size){
        //         if(intervals[front][1] != -1 && intervals[front][1] >= intervals[last][0] && front< last){
        //             intervals[front][1] = max(intervals[last][1],intervals[front][1]);
        //             intervals[last][1] = -1;
        //             intervals[last][0] = -1;
        //             last++;
        //         }
        //         else
        //         {
        //             front++;
        //         }
        //     }
        // }

        // vector<vector<int>> ans;
        // for(int i = 0; i<size; i++){
        //     vector<int> a = intervals[i];
        //     if(a[0] != -1){
        //         ans.push_back(a);
        //     }
        // }
        // return ans;
        class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
       vector<vector<int>>v;
       int start;
       int end;
       int i;
        sort(nums.begin(), nums.end());
       
       for( i=0;i<nums.size();i++)
       {
           int start=nums[i][0];
           int end=nums[i][1]; 
            while(i!=nums.size()-1 && end>=nums[i+1][0])
           {
               end= max(end,nums[i+1][1]);
               i++;
           }
           
           
           vector<int> temp={start,end};
           v.push_back(temp);
       } 
       return v;
    }
};