class Solution {
public:
    int tribonacci(int n) {
        vector<int> T{0,1,1};
        for(int i=3;i<=n;i++){
            T.push_back(T[i-3]+T[i-2]+T[i-1]);
        }
        return T[n];
    }
};