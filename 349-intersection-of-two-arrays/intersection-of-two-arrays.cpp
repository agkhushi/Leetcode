class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>answer;
        int i=0;
        int j=0;
       while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                answer.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        unordered_set<int> answer1(answer.begin(),answer.end());
        return vector<int>(answer1.begin(),answer1.end());

    }
};