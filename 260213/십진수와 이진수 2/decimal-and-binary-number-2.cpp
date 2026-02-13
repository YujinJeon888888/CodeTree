#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

string N;

int main() {
    cin >> N;//왼->오로 숫자 들어감
    int num=0;
    vector<int> answer(15,0);
    int index=0;
    // Please write your code here.
    num = N[0]-'0';
    for(int i=1;i<N.length();i++){
        num = num*2+(N[i]-'0');
    }
    num*=17;

    //이진수로 바꾸기
    while(num>=2){
        //나머지 넣기
        answer[index++] = num%2;
        //나누기
        num/=2;
    }

    //나머지넣기
    answer[index]=num;
    //출력
    for(int i=index;i>=0;i--){
        cout<<answer[i];
    }

    return 0;
}