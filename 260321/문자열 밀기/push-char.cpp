#include <string>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    //맨 앞 문자열, 그 이하 문자열 떼기
    string s1=s.substr(0,1);
    string s2=s.substr(1,s.length()-1);
    //그 이하 문자열+맨앞 문자열로 재조합
    cout<<s2+s1;
    //출력
    return 0;
}