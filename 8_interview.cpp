#include <iostream>
#include<stack>
#include <queue>
#include <deque>
using namespace std;
int main() {
    // Initializing a queue with values
    deque<int> myDeque = {1, 2, 3, 4, 5};
    queue<int,deque<int>> myQueue(myDeque);
    int len = myQueue.size();
    int k = 3;
    stack<int> stk;
    for(int i = 0; i<k;i++ ){
        stk.push(myQueue.front());
        myQueue.pop();
    }
    queue<int> r;
     for(int i = 0; i<k;i++ ){
        r.push(stk.top());
        stk.pop();
     }
     for(int j=0;j<len-k;j++){
        r.push(myQueue.front());
        myQueue.pop();
     }
    while (!r.empty()){
        cout<<r.front()<<" ";
        r.pop();
    }
    
    

    return 0;
}
