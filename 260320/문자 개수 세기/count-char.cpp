#include <string>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    getline(cin,s);
    char c;
    cin>>c;

    int count=0;
    
    for(const auto& val:s){
        if(val==c){
            count++;
        }
    }
    cout<<count;
    return 0;
}