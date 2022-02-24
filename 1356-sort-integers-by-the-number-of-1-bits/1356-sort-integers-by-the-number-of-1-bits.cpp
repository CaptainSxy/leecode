class Solution {
public:
    int get(int x){
        int num=0;
        while(x){
            num+=x%2;
            x=x/2;
        }
        return num;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> bit(10001, 0);
        for(auto x:arr){
            bit[x]=get(x);
        }
        sort(arr.begin(), arr.end(), [&](int x, int y){
            if(bit[x]<bit[y])
                return true;
            if(bit[x]>bit[y])
                return false;
            return x<y;
        });
        return arr;
    }
};

//sort的排序函数重写