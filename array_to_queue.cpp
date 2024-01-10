#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    queue<int> myqueue;
    // copy(arr,arr+size,back_inserter(myqueue));
    for(int i =0; i<size;i++){
        myqueue.push(arr[i]);
    }
    while(!myqueue.empty()){
        cout<<myqueue.front()<<" ";
        myqueue.pop();
    }
    return 0;
}