class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        for (int a : apple) {
            totalApples += a;
        }

        sort(capacity.rbegin(), capacity.rend());

        int boxes = 0;
        for (int c : capacity) {
            totalApples -= c;
            boxes++;
            if (totalApples <= 0) {
                return boxes;
            }
        }

        return boxes;
    }
};
