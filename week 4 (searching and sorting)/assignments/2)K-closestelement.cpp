#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
 void kclosest(vector<int>& arr,int k,int x){
    int h=arr.size()-1;
    int l=0;
    while (h-l>=k){
            if(x-arr[l]>arr[h]-x)
            l++;
            else
            h--;
    }
    // return vector<int> (arr.begin()+l,arr.begin()+h+1);
    for (int i = l; i <= h ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 }

int main(){
 vector<int> arr={1,2,3,4,5};
 kclosest(arr,4,3);
}