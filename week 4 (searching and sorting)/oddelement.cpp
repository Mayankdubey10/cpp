#include <iostream>
using namespace std;
void oddele(int arr[]){
    int s=0;
    int e=12;
  
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e){
        if(mid & 1){
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }           
            else{
                e=mid-1;
            } 
        }
        else{
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else if(arr[mid]==arr[mid-1]){
                e=mid-2;
            }
            else{
                ans=mid;
                break;
            }
        }
        mid=s+(e-s)/2;
    }
    cout<<arr[ans];
}
int main (){
    int arr[]={1,2,2,4,4,5,5,6,6,7,7,8,8};
    oddele(arr);

}