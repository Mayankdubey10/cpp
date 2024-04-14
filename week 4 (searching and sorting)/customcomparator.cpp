#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
bool mycomp(int& a,int& b){
    return a>b;
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    sort(arr.begin(),arr.end(),mycomp);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
}