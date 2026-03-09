#include <iostream>
#include <algorithm>//min,max
#include <climits>//INT_MAX, INT_MIN
#include <cmath>//abs

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int minResult=INT_MAX;
    // for문 : 최솟값 구하기(sum을 min에 넣기) (해당 수 뽑기)
    for(int i=0;i<n;i++){
        int pickedNum=A[i];
        int sum=0;
        // for문: 찾아가기를 사람수만큼 반복해서, sum구하기
        for(int j=0;j<n;j++){
            // i==j이면 continue;
            if(i==j){
                continue;
            }
            //사람수만큼 반복
            for(int k=0;k<A[j];k++){
                sum+=abs(i-j);
            }
        }
        minResult=min(minResult,sum);
    }

    cout<<minResult;

    return 0;
}