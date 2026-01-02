#include <iostream>

using namespace std;

int a, b, c;

//각 자리 숫자를 더하는 함수
int Func(int num){
    //종료조건: 한자리수
    if(num%10==num){
        return num;
    }

    //일반화
    return Func(num/10) + Func(num%10);
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    int product = a*b*c;

    cout<<Func(product);

    return 0;
}