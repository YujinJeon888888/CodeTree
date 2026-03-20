#include <string>
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string sArr[5]={"apple", "banana", "grape", "blueberry", "orange"};
    
    char findC;
    cin>>findC;
    int result=0;
    for(const auto& s:sArr){
        int cIndex=0;
        for(const auto& c:s){
            cIndex++;
            if(cIndex!=3&&cIndex!=4){
                continue;
            }
            if(c==findC){
                result++;
                cout<<s<<'\n';
                break;
            }
        }
    }
    cout<<result;
    return 0;
}