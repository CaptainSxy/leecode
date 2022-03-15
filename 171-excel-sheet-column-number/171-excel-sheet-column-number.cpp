class Solution {
public:
    long titleToNumber(string columnTitle) {
        long num = 0;
        for(char c:columnTitle){
            num = num*26 + c-64;
        }
        return num;
    }
};