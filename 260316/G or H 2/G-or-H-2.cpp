#include <iostream>
#include <algorithm>
#include <vector>

#define ARR_SIZE 101

using namespace std;

int n;
char board[ARR_SIZE]={0,};


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p; char c;
        cin>>p>>c;
        board[p]=c;
    }

    int maxSize=0;

    //for: 시작점
    for(int i=0;i<ARR_SIZE;i++){
        //for:끝점
        for(int j=i;j<ARR_SIZE;j++){
            //양 끝이 사람이 아니면 
            if(board[i]==0||board[j]==0){
                continue;
            }

            int gCount=0, hCount=0;
            for(int k=i;k<=j;k++){
                if(board[k]=='G'){
                    gCount++;
                }
                if(board[k]=='H'){
                    hCount++;
                }
            }

            //한 종류만 있거나, G와 H개수가 정확히 같을 때 맥스사이즈 갱신
            if((gCount>0&&hCount==0) || (hCount>0&&gCount==0) || (gCount==hCount)){
                maxSize=max(maxSize,j-i);
            }
        }
    }
    cout<<maxSize;
    return 0;
}