// #include <iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> myarray ={1,15,25,45,42,21,17,12,11};
//     auto max1 = max_element(myarray.begin(),myarray.end());
//     if(max1!=myarray.end()){
//         int max = *max1;
//         cout<<max;

//     }
//     else{
//         cout<<"vector is empty";
//     }
//     return 0;
// };

// o(logn)

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findmax(int arr[],int size)
{
    int beg = 0;
    int end = size-1;
    while(beg <= end){
    int mid = (beg+end)/2;
    if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]){
        return mid;
    }
    if(arr[mid]<arr[mid+1]){
        beg = mid +1;
    }
    else{
        end = mid-1;
    }
  }

};

int main(){
    int myarray[] ={1,15,25,45,42,21,17,12,11};
    int size = sizeof(myarray)/sizeof(myarray[0]);
    int index = findmax(myarray,size);
    int result = myarray[index];
    cout<<result;
     return 0 ;
};