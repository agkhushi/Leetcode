class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        string news="";
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        vector<pair<int,char>> result;
        for(auto it:freq){
            result.push_back({it.second,it.first});
        }
        sort(result.rbegin(),result.rend()); // rbegin will reverse in descending order, it will reverse the iteration
        //reverse(s.begin(),s.end());
        for(auto p : result){
            news += string(p.first, p.second); 
        }
        return news;
    }
};