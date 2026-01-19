#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    vector<string> findStrings;
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // Please write your code here.
    //1. t로 시작하는 단어 추출
    for(int i=0;i<n;i++){
        if(str[i].length()<t.length()){
            continue;
        }
        if(str[i].substr(0,t.length())==t){
            findStrings.push_back(str[i]);
        }
    }
    //2. t로 시작하는 단어들을 오름차순 정렬
    sort(findStrings.begin(),findStrings.end());   

    //3. k번쨰 글자 출력
    cout<<findStrings[k-1];


    return 0;
}