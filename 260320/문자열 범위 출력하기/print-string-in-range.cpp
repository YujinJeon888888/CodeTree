#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    // Please write your code here.
    getline(cin,s);
    for(int i=2;i<9;i++){
        cout<<s[i];
    }
    return 0;
}