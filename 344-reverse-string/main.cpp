#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        char t;
        for(int i=0;i<len;i++){
            int new_i = len -1 - i;
            if(i!=new_i){
                t = s[i];
                s[i] = s[new_i];
                s[new_i] = t;
            }
        }
        string new_s(s.begin(),s.end());
        cout << new_s << endl;
    }
};

int main(){
  vector<char> nums = {'h','e','l','l','o'};
  Solution solution;
  solution.reverseString(nums);
}
