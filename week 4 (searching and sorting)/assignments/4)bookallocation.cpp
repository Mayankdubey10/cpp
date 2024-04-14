#include <iostream>
#include <vector>
using namespace std;

   bool bookallocation(int A[],int mid,int M,int N){
       int pages;
       
       int c=1;
       int length = N-1;
       for(int i=0;i<length;i++){
          if(c<=M){
               if (pages<=mid){
                     pages+=A[i];
                  }
               else{
                     c++;
                  }
          }
           else{
               return false;
           }
    
       }
       return true;
   }
   
   
    int findPages(int A[], int N, int M) 
    {
       
       int start=0;
       int end= N-1;
       int ans=-1;
       int mid=start+(end-start)/2;
       if (M>end){
           return -1;
       }
       else{
       while(start<=end){
           if(bookallocation( A,mid, M,N)){
               ans=mid;
               end=mid-1;
           }
           else{
               start=mid+1;
               }
                mid=start+(end-start)/2;
           }
       }
       return ans;
    }
int main(){
int N= 4;
int A[]={12,34,67,90};
int M=2;
findPages(A,  N,  M);
}
