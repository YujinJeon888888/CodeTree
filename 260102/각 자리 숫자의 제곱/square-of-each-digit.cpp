#include <iostream>

using namespace std;

int N;

//함수: 각 자리수의 제곱의 합을 출력
int SumOfEachSquare(int num){
    //종료조건: 한자리수면 => num의 제곱을 리턴
    if(num%10==num){
        return num*num;
    }

    //일반화: F(10으로 나눈 몫) + F(10으로 나눈 나머지)
    return SumOfEachSquare(num/10) + SumOfEachSquare(num%10);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout<<SumOfEachSquare(N);

    return 0;
}