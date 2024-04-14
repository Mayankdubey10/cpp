 #include<iostream>
 #include <vector>
 #include <algorithm>
 #include <set>
 using namespace std;
class Solution {
public:
    bool placed( vector<int>& stalls,int n,int k, int mid)
    {
        int c=1;
        int dist=stalls[0];
        for(int i=0;i<n;i++){
            if(stalls[i]-dist>=mid){
                dist=stalls[i];
                c++;
            }
            if(c==k){
                return true;
            }
            
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
       int start=0;
       int ans=-1;
       int end=stalls[n-1]-stalls[start];
       int mid=start+(end-start)/2;
       
       while(start<=end){
           if(placed(  stalls,n, k, mid))
           {
               ans=mid;
               start=mid+1;
           }
           else{
               end=mid-1;
           }
            mid=start+(end-start)/2;
       }
       return ans;
    }
};