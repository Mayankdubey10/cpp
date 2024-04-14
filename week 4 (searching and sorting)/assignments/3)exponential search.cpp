#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int>& arr,int k,int start,int end){
    int mid=start+(end-start)/2;
  
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if (arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
}
int exponential_search(vector<int>& arr,int k){
    int start = 1;
    int end=arr.size()-1;
    if(arr[0]==k){
        return 0;
    }   
    else{
        while(start<end && arr[start]<k){
            start*=2;
        }
        return bs(arr,k,start/2,start);
    } 
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int index=exponential_search(arr,5);
    cout<<index;
}