#include <iostream>

using namespace std;

int N;

//n번째 수열을 구하는 함수
int Func(int n){
    //종료조건
    //1번째수열: 1
    if(n==1){
        return 1;
    }
    //2번째수열: 2
    if(n==2){
        return 2;
    }

    //일반화
    return Func(n/3) + Func(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout<<Func(N);

    return 0;
}