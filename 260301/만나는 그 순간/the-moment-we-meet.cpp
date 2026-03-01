#include <iostream>
#include <queue>
using namespace std;

int n, m;
queue<char> d;
int t[1000];
queue<char> d2;
int t2[1000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        char direction;
        cin >> direction;
        d.push(direction);
        cin >> t[i];
    
    }
    for (int i = 0; i < m; i++) {
        char direction;
        cin>>direction;
        d2.push(direction);
        cin >> t2[i];    
    }

    // Please write your code here.
    //총 몇시간인지 구하가
    int totalTime=0;
    for(const auto& val:t){
        totalTime+=val;
    }
    //시간 배열 초기화(a,b배열)
    vector<int> aTimeArr(totalTime);
    int aInitialPos=0,bInitialPos=0;
    vector<int> bTimeArr(totalTime);
    //a,b모두(다른for문) 시간배열 꺼내보며,해당 시간수만큼 이동. (이동후좌표는
    //시간배열에 저장)
    //a
    for(const auto& val:t){
        for(int i=0;i<val;i++){
            aTimeArr[i]=aInitialPos + (1*(d.front()=='L'?-1:1));
            d.pop();
        }
    }
    //b
    for(const auto& val:t2){
        for(int i=0;i<val;i++){
            bTimeArr[i]=bInitialPos + (1*(d.front()=='L'?-1:1));
            d2.pop();
        }
    }
    //결과: ab배열 순회하여,최초로 값이 같아지는 곳에서 시간 프린트.
    for(int i=0;i<totalTime;i++){
        if(aTimeArr[i]==bTimeArr[i]){
            cout<<aTimeArr[i];
        }
    }
    return 0;
}