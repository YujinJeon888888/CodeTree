#include <iostream>

using namespace std;

int N;

//1또는 2부터 N까지의 합을 출력하는 함수
int Sum(int n){
    //종료조건
 
    if(n<=2){
        //홀수
        if(n&1){
            return 1;
        }
        //짝수
        else{
            return 2;
        }
    }
    

    //일반화
    //홀수
    if(n&1){
        return Sum(n-1) + n;
    }
    //짝수
    else{
        return Sum(n-1) + n;
    }
}


int main() {
    cin >> N;

    // Please write your code here.
    cout<<Sum(N);
    return 0;
}