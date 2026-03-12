#include <iostream>
#include <string>
#include <vector>

#define MAX_DIR 8

using namespace std;

int N, M;
//동서남북 북서 북동 남서 남동
int dRow[MAX_DIR]={0,0,1,-1,-1,-1,1,1};
int dCol[MAX_DIR]={1,-1,0,0,-1,1,-1,1};

bool IsInRange(int row,int col){
    if(row<0||col<0||row>=N||col>=M){
        return false;
    }
    return true;
}

int main() {
    cin >> N >> M;
    vector<vector<char>> board(N,vector<char>(M));
    for (int i = 0; i < N; i++) {
        for(int j=0;j<M;j++){
            cin>>board[i][j];
        }
    }

    // Please write your code here.
    int result=0;
    //for: 기준행
    for(int i=0;i<N;i++){
        //for: 기준열
        for(int j=0;j<M;j++){
            //"L"이 아니면 continue;
            if(board[i][j]!='L'){
                continue;
            }

            //모든 방향으로 돌려서, LEE가 나오는지 확인
            for(int k=0;k<MAX_DIR;k++){
                int count=1;
                int nextRow=i;
                int nextCol=j;
                //for: 2번
                for(int l=0;l<2;l++){
                    nextRow+=dRow[k];
                    nextCol+=dCol[k];
                    //범위체크
                    if(IsInRange(nextRow,nextCol)==false){
                        break;
                    }
                    //E면 count++
                    if(board[nextRow][nextCol]=='E'){
                        count++;
                    }
                }    
                if(count==3){
                    result++;
                }            
            }
        }
    }
       
    cout<<result;
                
    return 0;
}