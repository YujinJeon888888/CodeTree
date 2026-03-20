#include <string>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a,b;
    getline(cin,a);
    getline(cin,b);
    string result="";
    for(const auto& val: a){
        if(val!=' '){
            result+=val;
        }
    }
    for(const auto& val: b){
        if(val!=' '){
            result+=val;
        }
    }
    cout<<result;
    
    return 0;
}