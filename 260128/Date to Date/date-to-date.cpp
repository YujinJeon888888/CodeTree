#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    //월별 포함날짜를 담는 배열 정의
    int numOfDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    //1~m-1월까지의 날짜 + d를, 1과 2에 대해서 계산
    int days1 =0;
    int days2 = 0;
    for(int i=1;i<m1;i++){
        days1 += numOfDays[i];
    }
    days1 += d1;

    for(int i=1;i<m2;i++){
        days2 += numOfDays[i];
    }
    days2+=d2;
    //2계산결과 - 1계산결과
    cout<<days2-days1;
    
    return 0;
}