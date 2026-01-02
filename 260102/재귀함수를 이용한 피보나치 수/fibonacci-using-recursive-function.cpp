#include <iostream>

using namespace std;

int N;

//n에 대한 피보나치를 수하는 함수
int Fibonacci(int n){
    //종료조건
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout<<Fibonacci(N);
    return 0;
}