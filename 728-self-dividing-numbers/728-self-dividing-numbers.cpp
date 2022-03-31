class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int num = i;
            while(num){
                int div = num%10;
                if(div == 0)
                    break;
                if(i%div!=0)
                    break;
                num = num/10;
            }
            if(num==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};