#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int n,m;
queue<char> d;
int t[1000];
queue<char> d2;
int t2[1000];

int main(){
    cin>>n>>m;

    for(int i=0;i<n;i++){
        char direction;
        cin>>direction;
        d.push(direction);
        cin>>t[i];
    }
    for(int i=0;i<m;i++){
        char direction;
        cin>>direction;
        d2.push(direction);
        cin>>t2[i];
    }

    //총 시간 구하기
    int totalTime=0;
    for(int i=0;i<n;i++){
        totalTime+=t[i];
    }

    //시간배열초기화
    vector<int> aTimeArr(totalTime);
    vector<int> bTimeArr(totalTime);

    int aPos=0,bPos=0;
    int aTimeIndex=0,bTimeIndex=0;

    //이동
    for(int i=0;i<n;i++){
        int val=t[i];

        for(int step=0;step<val;step++){
            aPos+=(d.front()=='L'?-1:1);
            aTimeArr[aTimeIndex++]=aPos;
        }
        d.pop();
    }
    for(int i=0;i<m;i++){
        int val=t2[i];

        for(int step=0;step<val;step++){
            bPos+=(d2.front()=='L'?-1:1);
            bTimeArr[bTimeIndex++]=bPos;
        }
        d2.pop();
    }

    //결과출력
    for(int i=0;i<totalTime;i++){
        if(aTimeArr[i]==bTimeArr[i]){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}