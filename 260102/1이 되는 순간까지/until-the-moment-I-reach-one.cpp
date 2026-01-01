#include <iostream>
#include <cmath>

using namespace std;

int N;


//나눈 횟수를 반환하는 함수(1일땐 나누지x)
int Num(int N){
    //종료조건: 1이면 0반환
    if(N==1){
        return 0;
    }

    //홀수일 때
    if(N&1==1){
        //N/3를 나눈 횟수 + 지금 나누기 실행했으므로 1
        return Num(N/3) + 1;
    }
    //짝수일 때
    else{
        //N/2를 나눈 횟수 + 지금 나누기 실행했으므로 1
        return Num(N/2) + 1;
    }
}

int main() {
    cin >> N;
    
    cout<<Num(N);
    return 0;
}