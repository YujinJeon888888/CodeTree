#include <iostream>

using namespace std;

int N;

//나눈 횟수를 구하는 재귀함수
int DivideCount(int N){
    //종료: 1이면 나눌 수 x == 나눈횟수 0
    if(N<=1){
        return 0;
    }

    //홀수
    if(N&1){
        //나눌횟수 + 지금 나눈 횟수
        DivideCount(N/3)+1;
    }
    //짝수
    else{
        //나눌횟수 + 지금 나눈 횟수
        DivideCount(N/2)+1;
    }
}


int main() {
    cin >> N;

    // Please write your code here.
    cout<<DivideCount(N);
    return 0;
}