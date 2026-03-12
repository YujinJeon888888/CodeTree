#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int arr[20];

bool IsCarry(int a,int b, int c){
    //자릿수가 남은 동안 반복
    while(a>0||b>0||c>0){
        //끝자리수 더해보기
        int sumDigits= (a%10) + (b%10) + (c%10);

        //합이 10 이상인지 확인
        if(sumDigits>=10) {
            return true;
        }
        //다음 자릿수로 넘어가기 위해 10으로 나누기
        a/=10;
        b/=10;
        c/=10;
    }
    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int maxTotal=-1;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(IsCarry(arr[i],arr[j],arr[k])==false){
                    maxTotal=max(maxTotal,arr[i]+arr[j]+arr[k]);
                }
            }
        }
    }

    cout<<maxTotal;

    return 0;
}