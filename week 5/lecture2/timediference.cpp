// Given an array of integers temperatures represents the daily temperatures, 
// return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. 
// If there is no future day for which this is possible, keep answer[i] == 0 instead.

// Example 1:
// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> ans;
        for (int i=0;i<temperatures.size()-1;i++){
           int a= 0;
           bool flag=true;
           for (int j = i; j < temperatures.size(); j++)
           {
            if (temperatures[i]<temperatures[j]){
                flag=false;
                ans.push_back(a);
                break;
            }
            else{
                a++;

            }
           }
           if(flag){
                ans.push_back(0);
           }
         
        }
        if(ans.size()==temperatures.size()){
            return ans;
        }
        else{
        ans.push_back(0);
        return ans;
        }
    }

int main(){
vector<int> temperatures={55,38,53,81,61,93,97,32,43,78};
vector<int>  b= dailyTemperatures(temperatures);
for (int i = 0; i < b.size(); i++)
{
    cout<<b[i]<<" ";
}

}