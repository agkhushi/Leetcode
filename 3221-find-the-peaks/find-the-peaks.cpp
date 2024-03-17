class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> answer;
        int n=mountain.size();
        for(int i=1;i<n-1;i++){
            if(mountain[i-1]<mountain[i] && mountain[i+1]<mountain[i]){
                answer.push_back(i);
            }
        }
        return answer;
    }
};