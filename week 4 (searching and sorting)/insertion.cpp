#include<iostream>
#include <vector>
using namespace std;
void insertion(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<=n-1;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>key){
                arr[j+1]=arr[j];
            }
            j--;
        }
        arr[j+1]=key;
    }

    //display
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    vector<int> arr={5,4,3,2,1};
    insertion(arr);
}