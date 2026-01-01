#include <iostream>

using namespace std;

int N;
int count=0;

//
int Func(int num){
    //종료조건
    if(num==1){
        return;
    }

    //n이 짝수면 2로나누고 홀수면 3으로 나눈 몫을 취함
    //홀수
    if(num&1==0){
        count++;
        return num/3;
    }
    //짝수
    else{
        count++;
        return num/2;
    }

}

int main() {
    cin >> N;

    // Please write your code here.
    Func(N);
    cout<<count;
    return 0;
}