#include <iostream>

using namespace std;

int N;

//1부터 N까지의 합을 출력하는 함수
int SumOdd(int n){
    //종료조건
    if(n<=1){
        return 1;
    }
    

    //일반화
    return Sum(n-1) + n;
}

//2부터 N까지의 합을 출력하는 함수
int SumEven(int n){
    //종료조건
    if(n<=2){
        return 2;
    }
    

    //일반화
    return Sum(n-1) + n;
}





int main() {
    cin >> N;

    // Please write your code here.
    if(N&1){
        cout<<SumOdd(N);
    }
    else{
        cout<<SumEven(N);
    }
    return 0;
}