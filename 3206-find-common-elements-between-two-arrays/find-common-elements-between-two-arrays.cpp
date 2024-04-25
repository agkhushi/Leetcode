class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> answer;
        int counter=0;
        for(int i=0;i<n;i++){
               if((count(nums2.begin(),nums2.end(),nums1[i]))>0){
                counter++;
               } 
            }
            answer.push_back(counter);
            counter=0;
          for(int i=0;i<m;i++){
               if((count(nums1.begin(),nums1.end(),nums2[i]))>0){
                counter++;
               } 
            } 
            answer.push_back(counter);
            return answer; 
    }
};