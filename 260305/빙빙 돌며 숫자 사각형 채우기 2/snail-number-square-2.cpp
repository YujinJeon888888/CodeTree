#include <iostream>
#include <vector>
using namespace std;

int n, m;
//동 남 서 북 
int dRow[4] = {0,1,0,-1};
int dCol[4] = {1,0,-1,0};

bool IsValidateRange(int row,int col,vector<vector<int>>& board){
    //범위체크
    if(row<0||row>=n){
        return false;
    }
    if(col<0||col>=m){
        return false;
    }

    //0아닌지 체크
    if(board[row][col]!=0){
        return false;
    }
    return true;
}

//반시계방향 회전
void Rotate(int& dir){
    dir=(dir-1+4)%4;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    //보드판 초기화
    vector<vector<int>> board(n,vector<int>(m,0));
    //dir초기화: 초기위치는 남
    int dir=1;
    //0,0자리에 1 넣기
    int num=1;
    int col=0,row=0;
    board[row][col]=1;
    //num<=(n*m)-1인동안 반복 (앞에서 1을 미리 초기화했으므로)
    while(num<=(n*m)-1){
        //num++
        num++;
        //다음 위치 구하기
        int nextRow,nextCol;
        nextRow=row+dRow[dir];
        nextCol=col+dCol[dir];
        //다음위치에 대해 유효범위 아니면 rotate
        if(IsValidateRange(nextRow,nextCol,board)==false){
            Rotate(dir);
            //rotate한 위치에서 새로 다음위치 구하고 num넣기
            nextRow=row+dRow[dir];
            nextCol=col+dCol[dir];
            board[nextRow][nextCol]=num;
        }
        //else(로테이트 안했으면)
        else{
            //맨 처음 구한 다음위치에서 num넣기 
            board[nextRow][nextCol]=num;
        }
        //row,col업데이트        
        row=nextRow;
        col=nextCol;
    }

    for(const auto& row: board){
        for(const auto& col: row){
            cout<<col<<' ';
        }
        cout<<'\n';
    }
        
    
    return 0;
}