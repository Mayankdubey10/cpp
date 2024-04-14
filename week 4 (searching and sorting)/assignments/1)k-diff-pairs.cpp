#include<iostream>
#include <vector>
#include<set>
#include <algorithm>
using namespace std;
    int findPairs(vector<int>& arr,int k){
        sort(arr.begin(),arr.end());
        set<pair<int,int>> ans;
        int n=arr.size();
        int i=0,j=1;
        while (j<=n-1){
            if(arr[j]-arr[i]==k){
                ans.insert({arr[i],arr[j]});
                ++i;++j;
            }
             else if(arr[j]-arr[i]>k){
                ++i;
             }
             else if(arr[j]-arr[i]<k){
                ++j;
             }
             if(i==j){
                j++;
             }
            }
            return ans.size();
        }
    

int main(){
    vector<int> arr={3,1,4,1,5};
    int a=findPairs(arr,2);
    cout<<a;
}