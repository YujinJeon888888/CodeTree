#include <iostream>
#include <vector>
using namespace std;

int n, m;
int arr[100][100];
//동남서북
int dCol[4] = {1,0,-1,0};
int dRow[4] = {0,-1,0,1};

//유효체크
bool CheckValidate(vector<vector<int>>& board,int row, int col)
    //범위체크
    if(row<0||row>=n){
        return false;
    }
    if(col<0||col>=n){
        return false;
    }
    //0인지 체크
    if(board[row][col]!=0){
        return false
    }    
    return true;
}

//로테이트
void Rotate(int& dir, bool clockWay){
    if(clockWay){
        dir = (dir+1)%4;
    }
    else{
        dir = (dir-1+4)%4;
    }
}

//무브
void Move(vector<vector<int>>& board, int& row, int& col, int& dir, int num){
    //다음 row,col 예측
    int nRow,nCol;
    nRow = row+dRow[dir];
    nCol = col+dCol[dir];
    //유효범위 체크
    if(CheckValidate(board,nRow,nCol)==false){
        //로테이트
        Rotate(dir,true);
        return;
    }
    //이동
    row=nRow;
    col=nCol;
    board[row][col]=num;
}

int main() {
    cin >> n >> m;
    int row=0,col=0;
    int dir=0;
    vector<vector<int>> board(n,vector<int>(m,0));
    // Please write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int num;
            cin>>num;
            //무브
            Move(board,row,col,dir,num);
        }
    }

    return 0;
}