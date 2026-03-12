#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main() {
    cin >> n;
    cin >> str;

    // Please write your code here.
    int count=0;
    //for: c
    for(int i=0;i<n-2;i++){
        if(str[i]!='C'){
            continue;
        }
       //for: o
       for(int j=i+1;j<n-1;j++){
            if(str[j]!='O'){
                continue;
            }
            //for: w
            for(int k=j+1;k<n;k++){
                if(str[k]!='W'){
                    continue;
                }
                count++;
            }
       }
    }
    cout<<count;
        
            

    return 0;   
}