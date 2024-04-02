class Solution {
public:
    bool isIsomorphic(string s, string t) {
      
        if (s.size() != t.size())
            return false;
        
        unordered_map<char, char> sToTMap;
        unordered_map<char, char> tToSMap;
        
        for (int i = 0; i < s.size(); ++i) {
            if (sToTMap.find(s[i]) == sToTMap.end() && tToSMap.find(t[i]) == tToSMap.end()) {
                sToTMap[s[i]] = t[i];
                tToSMap[t[i]] = s[i];
            } else {
                if (sToTMap[s[i]] != t[i] || tToSMap[t[i]] != s[i])
                    return false;
            }
        }
        
        return true;
  
    }
};