#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool ispossiblesoln(int nP, vector<int>& cookranks,int mid){
    
    int pratacount=0;
    for (int i=0;i<cookranks.size();i++)
    {
        int timetaken=0;
        int j=1;
        int R=cookranks[i];
        while(true){
            if(timetaken+R*j<=mid){
            timetaken=timetaken+R*j;
            j++;
            ++pratacount;
            }
            else{
                break;
            }
        }
        if(pratacount>=nP){
            return true;
        }
    }
    return false;
}
int mintimetocomplete(int nP,vector<int>& cookranks){
    int start=0;
    int maxheight=*max_element(cookranks.begin(),cookranks.end());
    int end=maxheight*((nP*(nP+1))/2);
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ispossiblesoln(nP, cookranks, mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int nP,nC;
        cin>>nP>>nC;
        vector<int>cookranks;
        while(nC--){
            int R;cin>>R;
            cookranks.push_back(R);
        }
        cout<<mintimetocomplete(nP,cookranks)<<endl;
    }
}