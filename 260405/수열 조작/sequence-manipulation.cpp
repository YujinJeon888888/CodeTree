#include <deque>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    deque<int> dq;
    for(int i=1;i<=n;i++){
        dq.push_back(i);
    }
    while(dq.size()!=1){
        dq.pop_front();
        int val=dq.front();
        dq.pop_front();
        dq.push_back(val);
    }
    cout<<dq.front();
    return 0;
}