class Solution {
public:
    const int dx[4]={-1,0,0,1};
    const int dy[4]={0,1,-1,0};
    void dfs(vector<vector<int>>& image, int x, int y, int currColor, int newColor){
        if(image[x][y]==currColor){
            image[x][y] = newColor;
            for(int i=0;i<4;i++){
                    int x_curr = x + dx[i];
                    int y_curr = y + dy[i];
                    if(x_curr>=0 && x_curr < image.size() && y_curr>=0 && y_curr < image[0].size())
                        dfs(image, x_curr, y_curr, currColor, newColor);
                }
            }   
        }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
        int currColor = image[sr][sc];
        if(currColor != newColor){
            dfs(image, sr, sc, currColor, newColor);
        }
        return image;
    }
};