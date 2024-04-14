#include<iostream>
using namespace std;


void pivot(int arr[],int n){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while (s<=e){
            if(s==e){
                cout<<s;
                break;
            }
            if(mid+1<n && arr[mid]>arr[mid+1]){
                cout<< mid;break;
            }
            else if(mid-1>0 && arr[mid]<arr[mid-1]){
                cout<< mid-1;break;
            }
            if(arr[s]>arr[mid] ){
                e=mid-1;
            }
            else if(arr[s]<arr[mid]){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
     
}

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=7;
    pivot(arr,n);
}







