class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    vector<int> height ;
    height.push_back(0);
    int sum = 0;
    int n = gain.size();
    for(int i=0;i<n;i++){
        sum+=gain[i];
        height.push_back(sum);
    }
        return *max_element(height.begin(),height.end());
    }
};