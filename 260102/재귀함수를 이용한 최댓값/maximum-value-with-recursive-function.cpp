#include <iostream>

using namespace std;

int n;
int arr[100];

//주어진 원소의 최댓값 구하기
//반복행위: 두 원소의 비교
int Max(int max, int n)
{
    //종료조건
    if(n<0){
        return max;
    }

    //일반화
    if(arr[n-1]>max){
        return Max(arr[n-1],n-1);
    }
    else{
        return Max(max,n-1);
    }

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout<<Max(arr[n-1],n-1);
    return 0;
}