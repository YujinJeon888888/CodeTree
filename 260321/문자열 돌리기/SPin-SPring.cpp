#include <string>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin>>s;

    cout<<s<<'\n';

    //맨뒤 문자열 떼고 맨 앞으로 붙여서 재조합하는 것 반복
    for(int i=0;i<s.length();i++){
        s=s.substr(s.length()-1,1)+s.substr(0,s.length()-1);
        cout<<s<<'\n';
    }
    return 0;
}