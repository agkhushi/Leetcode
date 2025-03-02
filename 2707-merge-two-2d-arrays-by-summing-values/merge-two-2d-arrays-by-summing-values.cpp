class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<vector<int>> result;
        int i=0;
        int j=0;
        int addition;
        vector<int> temp ;
        while(i<n && j<m){
            if(nums1[i][0] == nums2[j][0]){
               addition = nums1[i][1] + nums2[j][1]; 
               temp.push_back(nums1[i][0]);
               temp.push_back(addition);
               result.push_back(temp);
               temp.pop_back();
               temp.pop_back();
               i++; j++;
            }
            else if(nums1[i][0] < nums2[j][0]){
                result.push_back(nums1[i]);
                i++;
            }
            else{
                result.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            result.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            result.push_back(nums2[j]);
            j++;
        }
        return result;
    }
};