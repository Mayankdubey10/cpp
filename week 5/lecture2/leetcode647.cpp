// palindromic strings 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

 int expand(string s,int x,int y){
        int count=0;
        while(x>=0 && y<s.length() && s[x]==s[y])
        {
            count++;
            x--;
            y++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        for(int i=0;i<s.length();i++){
            //odd count
            int oddcount=expand(s,i,i);
            // even count
            int evencount=expand(s,i,i+1);
            totalcount=totalcount+evencount+oddcount;
        }
        return totalcount;
    }
    int main(){
        string s="abc";
        int a=countSubstrings(s);
        cout<<a;
    }