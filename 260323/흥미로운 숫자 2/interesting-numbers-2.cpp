#include <iostream>
#include <string>
#include <vector>
using namespace std;

int X, Y;

bool IsInterestingNum(int num)
{
    int difCount=0;
    vector<int> numsCount(10,0);
    bool result=false;

    while(num>0){
        numsCount[num%10]++;
        num/=10;
    }

    int zeroCount=0, oneCount=0; 

    for(const auto& val: numsCount){
        if(val==0){
            zeroCount++;
        }
        else if(val==1){
            oneCount++;
        }
    }

    if(zeroCount==8 && oneCount==1){
        result=true;
    }
    
    return result;
}

int main() {
    cin >> X >> Y;

    // Please write your code here.
    //범위 내에서 흥미로운 숫자 탐색
    int ans=0;
    for(int num=X ; num<=Y ; num++){
        if(IsInterestingNum(num)){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}