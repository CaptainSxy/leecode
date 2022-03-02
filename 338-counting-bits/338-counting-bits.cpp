class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int sum=0;
            int x = i;
            while(x>0){
                sum += x%2;
                x = x/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};