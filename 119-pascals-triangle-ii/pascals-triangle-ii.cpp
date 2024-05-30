class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> answer(rowIndex+1,1); // row initialised with rowindex plus 1 elements all initialised to 1 
       
       for(int i=1;i<rowIndex;i++){
            for(int j=i;j>0;j--){
                answer[j]+=answer[j-1];
            }
        }
       return answer;
    }
};