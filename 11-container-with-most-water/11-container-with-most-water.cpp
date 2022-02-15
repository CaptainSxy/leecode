class Solution {
public:
    int maxArea(vector<int>& height) {  //双指针
        int l = 0, r = height.size()-1, area = 0;
        while(r-l>0){
            area = max(area, (r-l)*min(height[l], height[r]));
            if(height[r]>height[l])
                l = l+1;
            else
                r=r-1;
        }
        return area;
    }
};