#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // Please write your code here.
    //1. 순서대로 정수 읽기: for배치
    for(int i=0;i<n;i++){
        //2. 홀수번째 원소면
        if(i%2==0){
            //지금까지 입력받은 값(0~현재인덱스)의 중앙값을 출력(오름차순 정렬 후 /2인덱스 값 출력)
            vector<int> temp = arr;
            sort(temp.begin(),temp.begin()+i+1);
            cout<<temp[i/2]<<' ';
        }
    }
    return 0;
}