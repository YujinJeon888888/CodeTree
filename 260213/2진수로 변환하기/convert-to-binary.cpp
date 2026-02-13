#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    // 벡터 초기화
    vector<int> binary(17,0);
    int index=0;
    // 종료컨디션: n<2이면 n넣고 종료
    while(n>1){
        // n/2해가며, 2로 나눈 나머지를 vector[index++]에 저장
        binary[index++] = n%2;
        n /= 2;
    }
    binary[index] = n;

    //출력 (인덱스 줄어들면서 출력)
    for(int i=index;i>=0;i--){
        cout<<binary[i];
    }
    return 0;
}