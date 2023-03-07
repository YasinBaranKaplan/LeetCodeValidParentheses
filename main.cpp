#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> brackers;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                brackers.push(s[i]);
            }
            else if(s[i]=='}'||s[i]==')'||s[i]==']'){
                if(brackers.empty())
                return false;
                else if (s[i]=='}'&& brackers.top()!='{')
                return false ;
                else if (s[i]==')'&& brackers.top()!='(')
                return false ;
                else if (s[i]==']'&& brackers.top()!='[')
                return false;
                else{
                    brackers.pop();
                }
            }

        }
        if (brackers.empty())
        return true;
        else
        return false;

    }
};

int main(){
return 0;
}
