#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    int days = a-11;
    int hours = b-11;
    int minutes = c-11;

    int result = days*24*60 + hours*60 + minutes;

    if(result<0){
        cout<<-1;
    }
    else{
        cout<<result;
    }
    return 0;
}