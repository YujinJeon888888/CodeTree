//최소공배수: 두 자연수의 곱 / 최대공약수
#include <iostream>
#include <vector>

using namespace std;

int n;
long long arr[10]; 

// 1. 최대공약수 함수
long long GCD(long long a, long long b){
    if(a % b == 0){
        return b;
    }
    return GCD(b, a % b);
}


// 2. 재귀 함수 (핵심)
// 내 이전 인덱스까지의 최소공배수와 지금 인덱스의 최소공배수를 구하는 함수
long long Rec_LCM(int index) {
    // [종료 조건] 맨 앞사람(0번째)이면 자기 자신 리턴
    if (index == 0) {
        return arr[0];
    }

    // [반복 행위]
    // 1. 앞사람(index-1)까지의 최소공배수를 먼저 구해옴
    long long prev_lcm = Rec_LCM(index - 1);

    // 2. (앞사람 결과 * 내 값) / GCD 
    return (prev_lcm * arr[index]) / GCD(prev_lcm, arr[index]);
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    
    cout << Rec_LCM(n - 1);


    return 0;
}