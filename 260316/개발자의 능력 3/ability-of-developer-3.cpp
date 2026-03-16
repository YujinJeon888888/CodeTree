#include <iostream>
#include <climits>//INT_MAX
#include <algorithm>//min
#include <cmath>//abs
using namespace std;

int abilities[6];
//팀원1,팀원2,팀원3을 인자로 넣기
int GetDiff(int teammate1, int teammate2, int teammate3){
    int sum1=0, sum2=0;
    sum1=teammate1+teammate2+teammate3;
    for(int i=0;i<6;i++){
        sum2+=abilities[i];
    }
    return abs(sum2-sum1);
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> abilities[i];
    }

    // Please write your code here.
    int minResult=INT_MAX;
    //팀 1개 고르기
    //for: 팀원1
    for(int i=0;i<6;i++){
        //for: 팀원2
        for(int j=0;j<6;j++){
            //for: 팀원3
            for(int k=0;k<6;k++){
                //getDiff하기
                int diff=GetDiff(abilities[i],abilities[j],abilities[k]);
                //if(getDiff<minResult)
                if(diff<minResult){
                    //갱신
                    minResult=diff;
                }
            }
        }
    }
    cout<<minResult;

    return 0;
}