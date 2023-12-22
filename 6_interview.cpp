#include<iostream>
using namespace std;

int main(){


    int a[] = {1,2,3,4,5};
    for(int i=0;i<5-2;i++){
        int temp = a[i+2];
        a[i+2]=a[i];
        a[i]=temp;
    }
     for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
