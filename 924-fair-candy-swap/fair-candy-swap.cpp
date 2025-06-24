class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> result;
        int n = aliceSizes.size();
        int m = bobSizes.size();
        int sum1 = 0, sum2 = 0;

        // Step 1: Calculate total candies for Alice and Bob
        for (int i = 0; i < n; i++) {
            sum1 += aliceSizes[i];
        }
        for (int j = 0; j < m; j++) {
            sum2 += bobSizes[j];
        }

        // Step 2: Calculate the difference to balance both sides
        int delta = (sum2 - sum1) / 2;

        // Step 3: Use a set to store Bob's candy sizes for fast lookup
        unordered_set<int> bobSet;
        for (int j = 0; j < m; j++) {
            bobSet.insert(bobSizes[j]);
        }

        // Step 4: Find the pair that satisfies the equation: y = x + delta
        for (int i = 0; i < n; i++) {
            int x = aliceSizes[i];
            int y = x + delta;
            if (bobSet.count(y)) {
                result.push_back(x);
                result.push_back(y);
                return result;
            }
        }

        return result; // guaranteed to find a solution
    }
};
