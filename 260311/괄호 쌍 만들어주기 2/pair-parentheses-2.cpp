#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //unique
using namespace std;

string A;

int main() {
    cin >> A;

    int count=0;
    //for: 왼쪽괄호
    for(int i=0;i<A.length();i++){
        if(A[i]!='('){
            continue;
        }
        //for: 왼쪽괄호
        for(int j=i+1;j<i+2&&j<A.length();j++){
            if(A[j]!='('){
                continue;
            }
            //for: 오른쪽 괄호
            for(int k=j+1;k<A.length();k++){
                if(A[k]!=')'){
                    continue;
                }
                //for: 오른쪽 괄호
                for(int l=k+1;l<k+2&&l<A.length();l++){
                    if(A[l]!=')'){
                        continue;
                    }
                    count++;
                }
            }
        }
    }
    
    cout<<count;
    return 0;
}