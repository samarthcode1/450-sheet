
class Solution
{
  public:
  
    string secFrequent (string arr[], int N)
    {
        unordered_map<string, int> um;
    // Counting frequency of each element
    for (int i = 0; i < N; i++) {
        if (um.find(arr[i]) != um.end()) {
            um[arr[i]]++;
        }
        else {
            um[arr[i]] = 1;
        }
    }
 
    int max = INT_MIN;
    vector<int> a;
    // Finding second maximum frequency
    for (auto j : um) {
        if (j.second > max) {
            max = j.second;
        }
    }
    for (auto j : um) {
        if (j.second != max) {
            a.push_back(j.second);
        }
    }
    sort(a.begin(), a.end());
    // Returning second most frequent element
    for (auto x : um) {
        if (x.second == a[a.size() - 1]) {
            return x.first;
        }
    }
    return "-1";
    }
};