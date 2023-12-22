#include <iostream>
using namespace std;

int findextra(int a[],int b[],int n){
    int beg = 0 ;
    int end = n-1;
    int mid;
    int index = 0;
    while(beg <= end){
        mid = (beg+end)/2;
        if(a[mid]==b[mid]){
            beg=mid+1;
        }
        else{
            index = mid;
            end = mid-1;
            
        }
    }
    return index;
};
int main(){
    int a[] ={2,4,6,8,9,10,12};
    int b[] ={2,4,6,8,10,12};
    int d=findextra(a,b,7);
    cout<<d;
}