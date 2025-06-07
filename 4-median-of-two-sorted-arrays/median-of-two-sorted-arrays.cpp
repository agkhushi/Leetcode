class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        double sum = 0 ;
        int z;
        vector<double> result;
        //int z=result.size();
        for(int i=0;i<n;i++){
            result.push_back(nums2[i]);
        }
        for(int j=0;j<m;j++){
                result.push_back(nums1[j]);
            }
        z=result.size();
        sort(result.begin(),result.end());
       // for(int k=0;k<z;k++){
            if(z%2!=0){
               sum=result[z/2];
            }
            else{
                sum=(result[z/2] + result[z/2 -1]) / 2.00;
            }
       // }
        // for(double k=0;k<z;k++){
        //     sum+=result[k];
        // }
        //double median = sum / z;
        return sum ;
    }
};