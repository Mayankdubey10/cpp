#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    string removeDuplicates(string s) {
        int len=s.length();
        int i=0;
        string ans="";
        while(i<len){
            if(ans[ans.length()-1]==s[i] && ans.length()>0){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }

int main(){
    string s="xaaxca";
    s= removeDuplicates(s);
    cout<<s;
}
