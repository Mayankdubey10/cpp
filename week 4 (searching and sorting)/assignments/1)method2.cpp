 #include<iostream>
 #include <vector>
 #include <algorithm>
 #include <set>
 using namespace std;
 int bs(vector<int>& arr, int start, int target){
        int end=arr.size()-1;
        while (end>=start){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if (arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }
    int findPairs(vector<int>& arr, int k) {
       sort(arr.begin(),arr.end());
       set<pair<int,int>> ans;
       int i=0;
       while (i<(arr.size()-1)){
           if(bs(arr,i+1,arr[i]+k)!=-1){
               ans.insert({arr[i],arr[i]+k});
           }
           i++;
           
       }
       return ans.size();
    }
    int main(){
    vector<int> arr={3,1,4,1,5};
    int a=findPairs(arr,2);
    cout<<a;
    }