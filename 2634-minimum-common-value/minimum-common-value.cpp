class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]<nums2[j]){
                    break;
                }
                else if(nums1[i]==nums2[j]){
                    return nums1[i];
                }
            }
        }
        return -1;
    }
};