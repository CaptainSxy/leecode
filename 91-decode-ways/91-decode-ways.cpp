class Solution {
public:
    int numDecodings(string s) {
        int first, second;
        if(s[0]=='0')
          first = 0;
        else
          first = 1;
        if(s.size()==1)
          return first;

        if(s[0]=='0')
          second = 0;
        else if(s[0]=='1'){
          if(s[1]=='0')
            second = 1;
          else
            second = 2;
        }
        else if(s[0]=='2'){
          if(s[1]=='0')
            second = 1;
          else if(s[1]>'6')
            second = 1;
          else
            second = 2;
        }
        else
          if(s[1]=='0')
            second = 0;
          else
            second = 1;

        // int first=1, second=2;
        int temp;

        int pre_num = s[1]-48;
        // cout<<first<<" "<<second<<endl;
        // cout<<"pre_num="<<pre_num<<endl;
        for(int i=2;i<s.size();i++){
            if(pre_num>2 && s[i]-48==0)
                temp = 0;
            else if(pre_num>2)
                temp = second;
            else if(pre_num==2){
                if(s[i]-48>6)
                    temp = second;
                else if(s[i]-48==0)
                    temp = first;
                else
                    temp = first+second;
            }
            else if(pre_num==0){
                if(s[i]-48==0)
                    temp=0;
                else
                    temp = second;
            }
            else if(s[i]-48==0)
                temp = first;
            else
                temp = first+second;

            // cout<<temp<<endl;
            first = second;
            second = temp;
            pre_num = s[i]-48;
            // cout<<"pre_num="<<pre_num<<endl;
        }
        return second;
    }
};