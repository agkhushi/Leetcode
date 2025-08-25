class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    vector<int> result;
    result.reserve(m * n);

    int r = 0, c = 0;
    bool up = true;  // direction flag: true = up-right, false = down-left

    while (result.size() < m * n) {
        result.push_back(mat[r][c]);

        if (up) { // moving up-right
            if (c == n - 1) {  // hit right border
                r++;
                up = false;
            } else if (r == 0) {  // hit top border
                c++;
                up = false;
            } else {  // normal move
                r--;
                c++;
            }
        } else { // moving down-left
            if (r == m - 1) {  // hit bottom border
                c++;
                up = true;
            } else if (c == 0) {  // hit left border
                r++;
                up = true;
            } else {  // normal move
                r++;
                c--;
            }
        }
    }

    return result;
}
};