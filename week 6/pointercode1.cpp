#include <iostream>
using namespace std;
void solve (int * arr){
    cout<<"the array inside solve = "<<*(arr+1)+2<<endl;
}
int main(){
    int arr[]={10,20,30};
    solve(arr);
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++)
    cout <<"  "<<arr[i];
}
