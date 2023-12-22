// transition point => Binary search
#include<iostream>
using namespace std;

int transition_point(int arr[],int n){
int beg = 0 ;
int end  = n-1;
int flag = 0;
if(n==1 && arr[0]==0){
    return -1;
}
while(beg <= end){
    int mid = (beg+end)/2;
    if(arr[mid]==1 && arr[mid-1]==0){
        return mid;
    }
    else if(arr[mid]==1){
        flag = 1;
        end = mid-1;
    }
    else {
        beg = mid+1;
    }

}
if(flag == 0){
    return -1;
}
}
int main()
{
    
    int arr[5] = {0,0,0,1,1};
    int d = transition_point(arr,5);
    cout<<d;
}