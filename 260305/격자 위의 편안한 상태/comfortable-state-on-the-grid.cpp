#include <iostream>
#include <vector>
using namespace std;

int N, M;
int r[10000], c[10000];
//동 남 서 북
int dCol[4]={1,0,-1,0};
int dRow[4]={0,1,0,-1};

//유효범위체크
bool IsInRange(int row,int col){
    bool isInRange=true;
    if(row<=0||row>N){
        isInRange=false;
    }
    if(col<=0||col>N){
        isInRange=false;
    }
    return isInRange;
}

//동남서북 칸을 확인하여 3개 이상 칠해졌다면 true리턴, 아니면 false 리턴
bool CheckComfortable(vector<vector<int>>& board, int row, int col){
    int colorCount=0;
    for(int i=0;i<4;i++){
        int cRow,cCol;
        cRow=row+dRow[i];
        cCol=col+dCol[i];

        if(IsInRange(cRow,cCol)==false){
            continue;
        }

        if(board[cRow][cCol]==1){
            colorCount++;
        }
    }

    return colorCount>=3?true:false;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }

    // Please write your code here.
    vector<vector<int>> board(N+1,vector<int>(M+1,0));
    //m만큼 for문 돌려서
    for(int i=0;i<M;i++){
        //위치받기
        int row=r[i],col=c[i];
        //해당 위치 칠하기
        board[row][col]=1;
        //칠한 위치에 대해 편안한 상태 체크
        bool isComfortable = CheckComfortable(board,row,col);
        //true면 1 출력
        if(isComfortable){
            cout<<1<<'\n';
        }
        //false면 0 출력
        else{
            cout<<0<<'\n';
        }
    }
   
    return 0;
}