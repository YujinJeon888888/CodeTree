#include <iostream>
#include <string>
using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    // for: 0인지 확인
    for(int i=0;i<a.length();i++){
        //0이면: 플립
        if(a[i]=='0'){
            a[i]='1';
            break;
        }
        //전부 1이면: 끝 플립
        if(i==a.length()-1&&a[i]=='1'){
            a[i]='0';
        }
    }
        

    //2진수를 10진수로
    int result = stoi(a,nullptr,2);
    cout<<result;
    
    return 0;
}