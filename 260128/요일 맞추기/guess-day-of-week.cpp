#include <iostream>
#include <cmath>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int daysOfMonth [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    //일로 변환: 2계산결과 - 1계산결과
    int days1=0;
    int days2=0;
    int result;
    for(int i=1;i<m1;i++){
        days1+=daysOfMonth[i];
    }
    days1+=d1;
    for(int i=1;i<m2;i++){
        days2+=daysOfMonth[i];
    }
    days2+=d2;
    result = days2-days1;

    //변환된 결과를 7로 나눈 나머지 구하기
    int answer = (result % 7 + 7) % 7;
    //0: 월, 1: 화, .. 6: 일
    switch(answer){
        case 0:
        cout<<"Mon";
        break;
        
        case 1:
        cout<<"Tue";
        break;

        case 2:
        cout<<"Wed";
        break;
        
        case 3:
        cout<<"Thu";
        break;
        
        case 4:
        cout<<"Fri";
        break;
        
        case 5:
        cout<<"Sat";
        break;
        
        case 6:
        cout<<"Sun";
        break;
    }
    return 0;
}