#include<iostream>
using namespace std;
int equilibrium(int arr[],int n){
    int lsum = 0;
    int rsum = 0 ;
    
   for(int i =0 ;i<n;i++){
    rsum=arr[i];
   }
   for(int j=0 ;j<n;j++){
    rsum = rsum-arr[j];
    if(lsum==rsum){
        return j+1;
    }
    lsum=lsum+arr[j];
   }  
      
    
};
int main(){
    int arr[]={1,3,5,2,2};
    int r= equilibrium(arr,5);
    cout<<r;
};