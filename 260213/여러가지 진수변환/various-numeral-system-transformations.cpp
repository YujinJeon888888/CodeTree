#include <iostream>
#include <vector>
using namespace std;

int N, B;

int main() {
    cin >> N >> B;
    vector<int> num(10,0); 
    int index = 0;
    // Please write your code here.
    while(N>=B){
        //나머지 넣고, 나누고
        num[index++] = N%B;
        N/=B;
    }   
    //최종도 넣고
    num[index]=N;

    //출력
    for(int i=index;i>=0;i--){
        cout<<num[i];
    }

    return 0;
}