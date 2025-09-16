class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1;
        int i=0;
        vector<int> result;
        while(true){
           if(i<arr.size() && arr[i]==num){
                i++;
           }else{
            k--;
            if(k==0){
                return num;
           }
           }
           num++;
        }
    }
};