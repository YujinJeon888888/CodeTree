#include <iostream>

using namespace std;

int N;

//1부터 n까지, n과 홀짝이 같은 수의 합을 반환
int GetNum(int n){
    //종료조건
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }

    //일반화(!!!홀짝이 같으려면, 2를 빼야 함!!!)
    return GetNum(n-2) + n;

}




int main() {
    cin >> N;

    // Please write your code here.
    GetNum(N);
    return 0;
}