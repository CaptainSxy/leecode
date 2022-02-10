class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int inf=1e9;
        int minPrice=inf, maxProfit=0;
        for(int price:prices){
            maxProfit=max(maxProfit, price-minPrice); //找最大差值
            minPrice=min(minPrice, price);
        }
        return maxProfit;
    }
};

