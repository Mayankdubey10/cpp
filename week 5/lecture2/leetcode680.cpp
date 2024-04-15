// Valid palindrome - II 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
        bool checkvalidpalindrome(string s,int x,int y){
            while(x<=y){
                if(s[x]==s[y]){
                    x++;
                    y--;
                }
                else{
                    return false;
                }
            }
            return true;
        }

bool validpalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            bool ans1=checkvalidpalindrome(s,i,j-1);
            bool ans2=checkvalidpalindrome(s,i+1,j);
            return ans1 || ans2;
        }
    }
    return true;
}
int main(){
    string s="aaabbaada";
    cout<<validpalindrome(s);
}