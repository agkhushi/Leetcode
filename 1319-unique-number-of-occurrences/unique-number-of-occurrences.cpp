class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        int hash[2001]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]+1000]++;
        }
        bool used[1001] = {false};
        for(int i=0;i<2001;i++){
            int count=hash[i];
            if(count>0){
                if(used[count]){
                    return false;
                }
                used[count]=true;
            }
        }
        return true;
    }
};