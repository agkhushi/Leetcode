class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> position;
        int n=nums.size()-1;
        int fst=-1;
        int lst=-1;
        int l=0;
        int r=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if (target==nums[mid]){
                fst=mid;
                r=mid-1;
            }
            else if (target>nums[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        l=0;
        r=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if (target==nums[mid]){
                lst=mid;
                l=mid+1;
            }
            else if (target>nums[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        position.push_back(fst);
        position.push_back(lst);
        return position;
    }
};