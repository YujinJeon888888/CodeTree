#include <iostream>

using namespace std;

int N;

//n번째 수열을 구하는 함수
//n: ~번째
int Func(int n){
    //종료조건
    if(n==2){
        return 4;
    }
    if(n==1){
        return 2;
    }

    //일반화
    return (Func(n-2)*Func(n-1))%100;
}


int main() {
    cin >> N;

    // Please write your code here.
    cout<<Func(N);
    
    return 0;
}