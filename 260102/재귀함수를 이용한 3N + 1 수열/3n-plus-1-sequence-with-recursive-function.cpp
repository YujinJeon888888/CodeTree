#include <iostream>

using namespace std;

int n;

//짝수/ 홀수에따라 '연산 횟수를' 구하는 함수
int Func(int n){
    //종료조건
    //연산x = 연산횟수 0반환
    if(n<=1){
        return 0;
    }

    //일반화
    if(n&1){
        return Func(n*3+1) + 1;
    }
    else{
        return Func(n/2) + 1;
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    cout<<Func(n);
    return 0;
}