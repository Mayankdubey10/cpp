#include <iostream>
using namespace std;
void missing_ele(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        int diff=arr[mid]-mid;
        if(diff==1){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    if(ans==-1){
        cout<<"the missing element is 9"<<endl;
    }
    else{
        cout<<"the missing element is = "<<ans+1<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;
    missing_ele(arr,n);
}