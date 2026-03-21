#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n,k;

int main() {
    cin >> n >> k;

    vector<int> bombs(n);
    for(int i=0;i<n;i++){
        cin>>bombs[i];
    }

    // Please write your code here.
    int maxBombCount=-1;
    set<int, greater<int>> ans;

    //폭탄 번호 고르기
    for(int bombNum=0;bombNum<=1000;bombNum++){
        int bombCount=0;
        int startIndex=-1;
        //arr순회: 같은 폭탄 번호면 이걸 시작점으로
        for(int i=0;i<n;i++){
            if(bombs[i]==bombNum){
                startIndex=i;
            }
        }
        //그 폭탄 없으면 continue
        if(startIndex==-1){
            continue;
        }

        //시작점부터 k만큼 순회: 같은 폭탄 번호 있으면
        int iterateNum=k;
        int index=startIndex;
        while(iterateNum>0){
            iterateNum--;
            index++;
            //인덱스 초과 확인
            if(index>=n){
                break;
            }
            //터지면 결과에 insert
            if(bombs[index]==bombNum){
                ans.insert(bombNum);
                break;
            }
        }
    }

    if(ans.size()==0){
        cout<<-1;    
    }
    else{
        cout<<*ans.begin();
    }
    

    return 0;
}