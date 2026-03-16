#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int arr[5];

bool IsDiffEachAbility(int aIndex,int bIndex,int cIndex,int dIndex){
    int team1=arr[aIndex]+arr[bIndex];
    int team2=arr[cIndex]+arr[dIndex];
    int team3=0;
    for(int i=0;i<5;i++){
        team3+=arr[i];
    }
    team3=team3-team1-team2;

    if(team1==team2||team2==team3||team3==team1){
        return false;
    }
    return true;
}

int GetDiff(int aIndex,int bIndex,int cIndex,int dIndex){
    int team1=arr[aIndex]+arr[bIndex];
    int team2=arr[cIndex]+arr[dIndex];
    int team3=0;
    for(int i=0;i<5;i++){
        team3+=arr[i];
    }
    team3=team3-team1-team2;

    int maxNum=max({team1,team2,team3});
    int minNum=min({team1,team2,team3});
        
    return abs(maxNum-minNum);
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int result=INT_MAX;
    // Please write your code here.
    //for: 팀1 팀원1
    for(int i=0;i<5;i++){
        //for: 팀1 팀원2
        for(int j=i+1;j<5;j++){
            //for: 팀2 팀원1
            for(int k=0;k<5;k++){
                //for: 팀2 팀원2
                for(int l=k+1;l<5;l++){
                    //팀원중복x
                    if(i==k||i==l||j==k||j==l){
                        continue;
                    }
                    if(IsDiffEachAbility(i,j,k,l)==false){
                        continue;
                    }
                    //GetDiff
                    //min갱신
                    result=min(result,GetDiff(i,j,k,l));
                }
            }
        }
    }
        

    if(result==INT_MAX){
        cout<<-1;
    }
    else{
        cout<<result;
    }
    return 0;
}