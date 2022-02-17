class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> A;
        while(n!=1){
            int temp = 0;
            A.insert(n);
            while(n>0){
                temp += pow(n%10, 2);
                n = n/10;
            }
            n = temp;
            if(A.count(n)>0)
                return false;
        }
        cout<<endl;
        return true;
    }
};