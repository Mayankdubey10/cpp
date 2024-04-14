#include<iostream>
using namespace std;


void peak(int arr[],int n){
    int s=0;                                                                              
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e){
        if(s==e){
            cout<<s;
        }
        if(mid+1<n && arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<e;
}
int main(){
    int arr[]={10,20,50,40,30};
    int n=5;
    peak(arr,n);
}