#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.
    //a,b 묶어서 분변환
    int minuteAB = a*60 + b;
    //c,d 묶어서 분변환
    int minuteCD = c*60 + d;
    //cd분변환에서 ab분변환 빼기
    int result = minuteCD - minuteAB;
    
    cout<<result;
    
    return 0;
}