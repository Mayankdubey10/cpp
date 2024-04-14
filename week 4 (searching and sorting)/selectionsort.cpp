#include<iostream>
#include<vector>
using namespace std;
void selection(vector<int> arr){
    int n=arr.size();
    for (int i = 0; i < n-1; i++)
    {   int element=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[element]>arr[j]){
                element=j;
            }
        }
        swap(arr[i],arr[element]);
    }
    
    // print 
     for ( int i = 0; i < n; i++)
    {
        cout<<arr[i];        
    }

}
int main(){
    vector<int> arr={8,7,6,5,4,3};
    selection(arr);
}