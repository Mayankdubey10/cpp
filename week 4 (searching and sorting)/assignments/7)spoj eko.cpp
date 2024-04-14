#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool height(long long int n,long long int m,vector<long long int>& arr, long long int mid){
         long long int sum=0;
         for (int i = 0; i < n; i++)
         {
            if(arr[i]-mid>0){
                sum+=(arr[i]-mid);
            }                        
         }
         if(sum>=m){
            return true;
         }
         else{
            return false;
         }
         
}
 int minheight(long long int n,long long int m,vector<long long int>& arr){
       sort(arr.begin(),arr.end());
       long long int start=0;
       long long int end=arr[n-1];
       long long int mid=start+(end-start)/2;
       int ans=-1;
       while(start<=end){
        if (height(n, m, arr,mid)){
            ans =mid;
            start=mid+1;
        }
        else{
             end=mid-1;
        }
        mid=start+(end-start)/2;
       }
       return ans;
 }
int main(){
   long long int n; long long int m;
   cin>>n>>m;
   int k=n;
   vector<long long int> arr;
   while(k--){
    long long int height;
    cin>>height;
    arr.push_back(height);
   }
   int ans=minheight( n, m, arr);
   cout<<ans;
}