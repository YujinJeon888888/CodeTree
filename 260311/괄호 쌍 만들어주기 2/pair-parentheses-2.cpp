#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //unique
using namespace std;

string A;

int main() {
    cin >> A;

    int count=0;
    int n=(int)A.size();

    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-1;j++){
            if(A[i]=='('&&A[i+1]=='('&&A[j]==')'&&A[j+1]==')'){
                count++;
            }
        }
    }
    
    cout<<count;
    return 0;
}