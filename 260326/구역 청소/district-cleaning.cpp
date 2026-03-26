#include <iostream>
#include <vector>
using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b;
    cin >> c >> d;
    int result=0;
    // Please write your code here.
    vector<bool> cleaned(100+1,false);
    for(int i=a;i<b;i++){
        cleaned[i]=true;
    }

    for(int i=c;i<d;i++){
        cleaned[i]=true;
    }

    for(const auto& val: cleaned){
        if(val){
            result++;
        }
    }

    cout<<result;


    return 0;
}