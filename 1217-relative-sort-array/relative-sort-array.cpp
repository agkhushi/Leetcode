class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        vector<int> result;
        int hash[1001]={0};
        for(int i=0;i<n;i++){
            hash[arr1[i]]++;
        }
        for(int j=0;j<m;j++){
            while(hash[arr2[j]]>0){
                result.push_back(arr2[j]);
                hash[arr2[j]] --;
                
            }
        }
        for (int i = 0; i <= 1000; i++) {
            while (hash[i] > 0) {
                result.push_back(i);
                hash[i]--;
            }
        }

        return result;
    }
};