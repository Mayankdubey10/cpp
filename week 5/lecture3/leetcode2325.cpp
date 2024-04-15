// decode the msg 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
    string decodeMessage(string key, string message) {
        // mapping 
        char start='a';
        char map[280]={0};
        for(auto ch: key){
            if(ch!=' ' && map[ch]==0){
                map[ch]=start;
                start++;
            }
        }
        // using 
        string ans;
        for(auto ch: message){
            if(ch==' '){
                ans.push_back(' ');
            }
            else{
                ans.push_back(map[ch]);
            }
        }
        return ans;
    }
int main(){
    string key="the quick brown fox jumps over the lazy dog";
    string message="vkbs bs t suepuv";
    string m= decodeMessage( key,  message);
    cout<<m<<endl;

}