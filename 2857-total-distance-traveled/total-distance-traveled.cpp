class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dist=0;
        for(int i=1;i<=mainTank;i++){
            dist+=10;
            if(i%5==0 && additionalTank>0 ){
                mainTank++;
                additionalTank--;
            }
        }
        return dist;
    }
};