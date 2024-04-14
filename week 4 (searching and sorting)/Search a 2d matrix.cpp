#include<iostream>
#include <vector>
using namespace std;
void search(vector<vector<int>>& arr,int target){
    int row=arr.size();
    int col=arr[0].size();
    int n=row*col;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int rowindex=mid/col;
        int colindex=mid%col;
        if(arr[rowindex][colindex]==target){
            cout<<rowindex<<" and "<<colindex<<endl;
            break;
        }
        else if(arr[rowindex][colindex]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    mid=s+(e-s)/2;

    }
}
int main(){
   vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    search(arr,5);
}