class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) 
    {
        vector<pair<string, string>> valid; // {businessLine, code}
        int n = code.size();

        // allowed business lines in required order
        vector<string> order = {"electronics", "grocery", "pharmacy", "restaurant"};
        unordered_map<string, int> priority;

        for (int i = 0; i < order.size(); i++)
            priority[order[i]] = i;

        for (int i = 0; i < n; i++) {

            // Condition 1: code must be non-empty + alphanumeric + underscore
            if (code[i].empty()) continue;

            bool ok = true;
            for (char c : code[i]) {
                if (!(isalnum(c) || c == '_')) {
                    ok = false;
                    break;
                }
            }
            if (!ok) continue;

            // Condition 2: businessLine must be valid category
            if (priority.find(businessLine[i]) == priority.end()) continue;

            // Condition 3: must be active
            if (!isActive[i]) continue;

            valid.push_back({businessLine[i], code[i]});
        }

        // Sort based on businessLine priority, then lexicographically by code
        sort(valid.begin(), valid.end(), [&](auto& a, auto& b){
            if (priority[a.first] != priority[b.first])
                return priority[a.first] < priority[b.first];
            return a.second < b.second;
        });

        // Extract result
        vector<string> result;
        for (auto& p : valid) result.push_back(p.second);

        return result;
    }
};
