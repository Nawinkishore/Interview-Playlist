// count array method
#include<iostream>
using namespace std;
int main(){
    int c0=0;
    int c1=0;
    int c2=0;

    int a[]={0,2,1,2,0};
    int n = sizeof(a)/sizeof(a[0]);
    for (int i=0 ;i<n;i++){
        if(a[i]==0){
             c0++;
        }
        else if(a[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    for(int j=0;j<c0;j++){
        a[j]=0;
    }
    for(int j=c0;j<c0+c1;j++){
        a[j]=1;
    }
    for(int j=c0+c1;j<n;j++){
        a[j]=2;
    }

    for(int j=0;j<n;j++){
        cout<<a[j];
    }
    return 0;
};