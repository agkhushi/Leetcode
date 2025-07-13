class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int count=0;
        int i=0;
        int j=0;
        int n=players.size();
        int m=trainers.size();
        sort(trainers.begin(), trainers.end());
        sort(players.begin(),players.end());
        while(i<n && j<m){
            if(players[i]<=trainers[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return count;
    }
};