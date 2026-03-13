#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    //입력받기
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    //b sort
    sort(b.begin(),b.end());
    
    int result=0;
    
    //for: a배열 시작점
    for(int i=0;i<=n-m;i++){
        //a배열 시작점~a배열 시작점+m-1까지 temp 벡터에넣고 sort
        vector<int> temp;
        for(int j=i;j<=i+m-1;j++){
            temp.push_back(a[j]);
        }
        sort(temp.begin(),temp.end());
        //for: b배열과 temp가 같으면 result++
        bool isSame=true;
        for(int j=0;j<m;j++){
            if(temp[j]!=b[j]){
                isSame=false;
            }
        }
        if(isSame){
            result++;
        }
    }
        
    cout<<result;

    return 0;
}