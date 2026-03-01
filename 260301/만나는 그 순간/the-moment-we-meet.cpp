#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
queue<char> d;

queue<char> d2;


int main() {
    cin >> n >> m;
    vector<int> t(n);
    vector<int> t2(m);
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
    int aPos=0,bPos=0;
    int aTimeIndex=0,bTimeIndex=0;
    vector<int> bTimeArr(totalTime);
    //a,b모두(다른for문) 시간배열 꺼내보며,해당 시간수만큼 이동. (이동후좌표는
    //시간배열에 저장)
    //a
    for(const auto& val:t){
        for(int i=aTimeIndex;i<val;i++,aTimeIndex++){
            aPos = aPos + (1*(d.front()=='L'?-1:1));
            aTimeArr[i]= aPos;   
        }
        d.pop();
    }
    //b
    for(const auto& val:t2){
        for(int i=bTimeIndex;i<val;i++,bTimeIndex++){
            bPos = bPos + (1*(d2.front()=='L'?-1:1));
            bTimeArr[i]=bPos;
        }
        d2.pop();
    }
    //결과: ab배열 순회하여,최초로 값이 같아지는 곳에서 시간 프린트.
    for(int i=0;i<totalTime;i++){
        if(aTimeArr[i]==bTimeArr[i]){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}