class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int maxii=-1;
        int hash[501]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=1;i<=500;i++){
            if(hash[i]==i){
                maxii=max(maxii,i);
            }
        }
        return maxii;
    }
};