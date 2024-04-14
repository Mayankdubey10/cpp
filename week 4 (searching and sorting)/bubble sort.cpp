#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> arr){
    int n=arr.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    
    // print 
     for ( int i = 0; i < n; i++)
    {
        cout<<arr[i];        
    }

}
int main(){
    vector<int> arr={8,7,6,5,4,3};
    bubblesort(arr);
}