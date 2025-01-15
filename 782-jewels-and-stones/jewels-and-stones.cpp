class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter=0;
        for(int i=0;i<jewels.length();i++){
            counter+= count(stones.begin(),stones.end(),jewels[i]);
        }
        return counter;
    }
};