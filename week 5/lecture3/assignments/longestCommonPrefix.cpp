// https://leetcode.com/problems/longest-common-prefix/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
  string longestCommonPrefix(vector<string>& strs) {
    string ans;
    int i=0;
    while(true){
        char curr_ch=0;
        for(auto str:strs){
            if(i>=strs.size()){
                curr_ch=0;
                break;
            }
            if (curr_ch==0){
                curr_ch=str[i];
            }
            else if(curr_ch!=str[i]){
                curr_ch=0;
                break;
            }
        }
        if(curr_ch==0){
            break;
        }
        ans.push_back(curr_ch);
        i++
    }
    return ans;
    }
int main(){

}