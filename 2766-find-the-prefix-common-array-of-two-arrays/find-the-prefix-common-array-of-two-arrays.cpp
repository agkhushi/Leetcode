class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int hash[50]={0};
        vector<int> answer;
        for(int i=0;i<A.size();i++){
            hash[A[i]-1]++;
            hash[B[i]-1]++;
            int counter =0 ;
            for(int j=0;j<50;j++){
                if(hash[j]==2){
                    counter++;
                }
            }
            answer.push_back(counter);
        }
        return answer;
    }
};