#include <iostream>
#include <utility>
#include <vector>
#define MAX_NUM 100
using namespace std;

int main() {
    // Please write your code here.
    int ans=0;
    // 입력받기
    int n;
    cin>>n;
    vector<int> line(100+1,0);
    //시작,끝 인덱스
    vector<pair<int,int>> lines(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            line[j]++;
            lines.push_back({a,b});
        }
    }
    //선분1
    for(int i=0;i<n;i++){
        //선분2
        for(int j=i+1;j<n;j++){
            //선분3
            for(int k=j+1;k<n;k++){
                //temp에 line복제
                auto temp = line;
                //temp에서 선분1,2,3제거
                for(int index=lines[i].first;index<=lines[i].second;index++){
                    temp[index]--;    
                }
                for(int index=lines[j].first;index<=lines[j].second;index++){
                    temp[index]--;    
                }
                for(int index=lines[k].first;index<=lines[k].second;index++){
                    temp[index]--;    
                }
                //for: 겹치는지 확인
                bool isOvelapped=false;
                for(const auto& val:temp){
                    if(val>=2){
                        isOverlapped=true;
                        break;
                    }
                }
                //안겹치면 ans++   
                if(!isOverlapped){
                    ans++;
                }
            }
        }            
    }
    cout<<ans;
        
    
    return 0;
}