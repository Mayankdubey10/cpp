#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
 void findErrorNums(vector<int>& nums) {
        
        
       set<int> arr;
       int sum1=0,sum2=0,sum3=0,missingno=0,repeatedno=0;
       for(int i=0;i<=nums.size()-1;i++){
           arr.insert(nums[i]);
           sum1=sum1+nums[i];
       }
      cout<<"sum1= "<<sum1<<endl;

   set<int>::iterator itr;
   
  // Displaying set elements
  for (itr = arr.begin(); 
       itr != arr.end(); itr++) 
  {
       sum2=sum2+*itr;
   
  }
      cout<<"sum2= "<<sum2<<endl;





       for(int i=0;i<=arr.size()-1;i++){
          
       }
       sum3=(nums.size()*(nums.size()+1))/2;
       cout<<"sum3= "<<sum3<<endl;

       missingno=sum3-sum2;
       int x=missingno-1;
       repeatedno=nums[x];
       vector<int> ans={repeatedno,missingno};

       int size=ans.size()-1;
       for (int i = 0; i<=size; i++)
       {
           cout<<ans[i];
       }

    }
int main(){
  vector<int> nums={3,2,3,4,6,5};
  findErrorNums(nums);
  
  

}