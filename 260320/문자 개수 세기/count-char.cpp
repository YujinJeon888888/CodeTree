#include <string>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    getline(cin,s);

    int count=0;
    
    for(const auto& val:s){
        if(val>='a'&&val<='z'){
            count++;
        }
    }
    cout<<count;
    return 0;
}