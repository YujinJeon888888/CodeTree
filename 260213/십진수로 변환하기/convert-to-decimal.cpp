#include <iostream>
#include <cstring>
using namespace std;

char binary[9];

int main() {
    cin >> binary;
    int num=binary[0]-'0';

    for(int i=1;i<strlen(binary);i++){
        num=num*2+(binary[i]-'0');
    }
    cout<<num;

    return 0;
}