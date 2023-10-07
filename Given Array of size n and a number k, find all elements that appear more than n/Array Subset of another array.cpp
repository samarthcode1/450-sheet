

string isSubset(int a1[], int a2[], int n, int m) {
    vector<int>v1,v2;
    for(int i=0;i<n;i++){
        v1.push_back(a1[i]);
    }
    // for(int i=0;i<m;i++){
    //     v2.push_back(a2[i]);
    // }
    unordered_map<int,int>mp;
    for(auto i:v1){
        mp[i]++;
    }
    // int j=0;
    // for(int i=0;i<m;i++){
    //     if(mp.find(a2[i])==mp.end()){
    //         return "No";
    //     }
    //     else{
    //         mp[a2[i]]--;
    //         // if (mp[a2[i]]==0){
    //         //     mp.erase(mp.find(a2[i]));
    //         // }
    //     }
    // }
    
    for(int i = 0; i<m; i++){
        if(mp.count(a2[i]) == 0 || mp[a2[i]] == 0){
            return "No";
        }else{
            mp[a2[i]]--;
        }
    }
    return "Yes";
    // return "Yes";
}