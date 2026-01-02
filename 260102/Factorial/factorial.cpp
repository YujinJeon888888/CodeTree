#include <iostream>

using namespace std;

int N;

//n!을 구하는 함수
int Factorial(int n){
    //종료조건
    if(n<=1){
        return 1;
    }

    //일반화
    return Factorial(n-1) * n;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout<<Factorial(N);


    return 0;
}