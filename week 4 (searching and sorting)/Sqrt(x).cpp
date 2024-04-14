#include<iostream>
using namespace std;
void sqrt(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if (mid*mid==n){
            cout<<mid;
            break;
        }
        else if (mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
}
int main(){
    int number=68;
    sqrt(number);
}