class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> source ;
        set<string> destination;
        int n=paths.size();
        for(int i=0;i<n;i++){
            source.insert(paths[i][0]);
            destination.insert(paths[i][1]);
        }
        for(auto i:destination){
           if (source.find(i)==source.end()){
            return i;
           }
        }
        return "";
    }
};