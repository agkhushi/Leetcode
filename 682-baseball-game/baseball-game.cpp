class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        int sum=0;
        vector<int> finals;
        for(int i=0;i<n;i++){
            int m = finals.size();
           if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+"){
            finals.push_back(stoi(operations[i]));
           }
           else if(operations[i]=="C"){
             finals.erase(finals.begin()+ m-1, finals.end());
           }
           else if(operations[i]=="D"){
            finals.push_back((finals[m-1])*2);
           }
           else if(operations[i]=="+"){
            finals.push_back((finals[m-1]) + (finals[m-2]));
           }
        }
        for(int i=0;i<finals.size();i++){
            sum+=finals[i];
        }
        return sum;
    }
};