class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1, sum=1;
        while(n-sum>=i+1){
            i++;
            sum += i;
        }
        return i;
    }
};