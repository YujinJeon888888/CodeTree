#include <iostream>

using namespace std;

int board[19][19];

// 동 남 서 북 북서 북동 남서 남동
int dRow[8]={0,1,0,-1,-1,-1,1,1};
int dCol[8]={1,0,-1,0,-1,1,-1,1};
//IsInRange
bool IsInRange(int row,int col){
    if(row<0||col<0||row>=19||col>=19){
        return false;
    }
    return true;
}

//이 오목돌의 연속성 체크
bool IsLine(int stoneNum,int row, int col){
    int nextRow=row;
    int nextCol=col;
    int count=1;
    //행 (↓)
    for(int i=0;i<4;i++){
        nextRow+=dRow[1];//남
        nextCol=col;
        if(IsInRange(nextRow,nextCol)&&board[nextRow][nextCol]==stoneNum){
            count++;
            if(count==5){
                //true면, 지금 오목돌 출력 후 \n, 라인의 가운데 행렬 출력
                cout<<stoneNum<<'\n';
                cout<<nextRow-2+1<<' '<<nextCol+1;
                return true;
            }
        }
        else{
            count=1;
            nextRow=row;
            nextCol=col;
            break;
        }
    }

    //열(→)
    for(int i=0;i<4;i++){
        nextRow=row;
        nextCol+=dCol[0];
        if(IsInRange(nextRow,nextCol)&&board[nextRow][nextCol]==stoneNum){
            count++;
            if(count==5){
                //true면, 지금 오목돌 출력 후 \n, 라인의 가운데 행렬 출력
                cout<<stoneNum<<'\n';
                cout<<nextRow+1<<' '<<nextCol-2+1;
                return true;
            }
        }
        else{
            count=1;
            nextRow=row;
            nextCol=col;
            break;
        }
    }

    //대각선(↙)
    for(int i=0;i<4;i++){
        nextRow+=dRow[6];
        nextCol+=dCol[6];
        if(IsInRange(nextRow,nextCol)&&board[nextRow][nextCol]==stoneNum){
            count++;
            if(count==5){
                //true면, 지금 오목돌 출력 후 \n, 라인의 가운데 행렬 출력
                cout<<stoneNum<<'\n';
                cout<<nextRow-2+1<<' '<<nextCol+2+1;
                return true;
            }
        }
        else{
            count=1;
            nextRow=row;
            nextCol=col;
            break;
        }
    }

    //대각선(↘)
    for(int i=0;i<4;i++){
        nextRow+=dRow[7];
        nextCol+=dCol[7];
        if(IsInRange(nextRow,nextCol)&&board[nextRow][nextCol]==stoneNum){
            count++;
            if(count==5){
                //true면, 지금 오목돌 출력 후 \n, 라인의 가운데 행렬 출력
                cout<<stoneNum<<'\n';
                cout<<nextRow-2+1<<' '<<nextCol-2+1;
                return true;
            }
        }
        else{
            count=1;
            nextRow=row;
            nextCol=col;
            break;
        }
    }
    return false;
}


int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    //for: 기준행
    for(int i=0;i<19;i++){
        //for: 기준열
        for(int j=0;j<19;j++){
            if(board[i][j]==0){
                continue;
            }
            //지금 오목돌을 인자로 넣어서, 연속성 체크
            if(IsLine(board[i][j],i,j)){
                return 0;
            }
    
        }
    }
        
    cout<<0;
                

    return 0;
}