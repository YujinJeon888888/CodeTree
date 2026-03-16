#include <iostream>
#include <cmath>//abs
#include <algorithm>//min,max
#include <climits>//INT_MAX
using namespace std;

int ability[6];

int GetResult(int aIndex,int bIndex, int cIndex,int dIndex){
    int team1=ability[aIndex]+ability[bIndex];
    int team2=ability[cIndex]+ability[dIndex];
    int team3=0;
    for(int i=0;i<6;i++){
        if(i==aIndex||i==bIndex||i==cIndex||i==dIndex)
            continue;
        team3+=ability[i];
    }

    //max
    int maxAbility=max({team1,team2,team3});
    //min
    int minAbility=min({team1,team2,team3});
    //차
    return abs(minAbility-maxAbility);
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
    }

    // Please write your code here.
    int result=INT_MAX;
    //for: 팀1 팀원1
    for(int i=0;i<6;i++){
        //for: 팀1 팀원2
        for(int j=i+1;j<6;j++){
            //for: 팀2 팀원1   
            for(int k=j+1;k<6;k++){
                //for: 팀2 팀원 2
                for(int l=k+1;l<6;l++){
                    //능력차이 계산
                    //min갱신
                    result=min(GetResult(i,j,k,l),result);
                }
            }
        }
    }
    cout<<result;
        

    return 0;
}