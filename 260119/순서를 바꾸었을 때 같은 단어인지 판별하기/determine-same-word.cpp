#include <iostream>
#include <string>
#include "algorithm"
using namespace std;

string word1;
string word2;

int main() {
    cin >> word1;
    cin >> word2;

    // Please write your code here.
    // 길이가 다르면 No
    if(word1.length()!=word2.length()){
        cout<<"No";
        return 0;
    }

    // 정렬하여 모든 원소 같은지 확인
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());

    for(int i=0;i<word1.length();i++){
        if(word1[i]!=word2[i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";


    return 0;
}
