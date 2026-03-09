#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int count=0;
    //for: (에 대해
    for(int i=0;i<A.length();i++){
        //for: )에 대해
        if(A[i]=='('){
            for(int j=i;j<A.length();j++){
                //찾으면: count++
                if(A[j]==')'){
                    count++;
                }
            }
        }
    }
    return 0;
}