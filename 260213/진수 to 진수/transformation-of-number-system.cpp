#include <iostream>
#include <vector>
using namespace std;

int a, b;
string n;
//n을 b진수로 표현하자
int main() {
    cin >> a >> b;//a: 오리지날 진수, b: 변환하고싶은 진수
    cin >> n; // n은 a진수로 표현된 수
    int num=0;
    vector<int> answer(29,0);
    int index=0;
    // Please write your code here.
    //1. n을 10진수로 표현
    num=n[0]-'0';
    for(int i=1;i<n.length();i++){
        num=num*a+(n[i]-'0');
    }
    //2. 10진수로 표현한 걸 b진수로 표현
    while(num>=b){
        answer[index++] = num%b;
        num/=b;
    }
    answer[index]=num;
    //3. 출력
    for(int i=index;i>=0;i--){
        cout<<answer[i];
    }

    return 0;
}