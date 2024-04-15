//https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
   int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickM=0;
        int pickP=0;
        int pickG=0;

        int lastindexM=0;
        int lastindexP=0;
        int lastindexG=0;
        
        int travelM=0;
        int travelP=0;
        int travelG=0;


        for(int i=0;i<garbage.size();i++){
            string a=garbage[i];
            for(auto ch: a){
                if(ch=='M'){
                    pickM++;
                    lastindexM=i;
                }
                if(ch=='P'){
                    pickM++;
                    lastindexP=i;

                }
                if(ch=='G'){
                    pickM++;
                    lastindexG=i;

                }
            }
        }
        for(int i=0;i<lastindexM;i++){
            travelM=travelM+travel[i];
        }
        for(int i=0;i<lastindexP;i++){
            travelP=travelP+travel[i];
        }
        for(int i=0;i<lastindexG;i++){
            travelG=travelG+travel[i];
        }
        return (pickM+travelM+pickP+travelP+pickG+travelG);
    }
int main(){
   vector<string> garbage={"G","P","GP","GG"};
   vector<int> travel={2,4,3};
   cout<< garbageCollection( garbage,  travel);

}