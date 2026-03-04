#include <iostream>
#include <vector>
using namespace std;

int n, t;
int r, c;
char d;
//동북서남
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

//방향플립
int IfHitReturnNewDirIndex(int& dirIndex){
    
    if(dirIndex==0){
        dirIndex= 2;
    }
    else if(dirIndex==1){
        dirIndex= 3;
    }
    else if(dirIndex==3){
        dirIndex= 1;
    }
    else if(dirIndex==2){
        dirIndex= 0;
    }
    return dirIndex;
}

//범위 내 있는지
bool IsInRange(int row, int col){
    if(row<=0||row>n){
        return false;
    }
    if(col<=0||col>n){
        return false;
    }
    return true;
}
//이동
void Move(vector<vector<int>> &board, int& dirIndex, int& x, int& y){
    //이전위치 캐시
    int befX=x;
    int befY=y;
    //새로운 위치 구하기
    int tempX = x+dx[dirIndex];
    int tempY = y+dy[dirIndex];
    //만약 범위를 벗어나면 
    if(IsInRange(tempX,tempY)==false){
        //플립 후 이동 x
        dirIndex = IfHitReturnNewDirIndex(dirIndex);
    }
    else{
        //이동 후 이동위치 기록(1)
        x=tempX;
        y=tempY;
        board[x][y] = 1;
        //이전위치 지우기 (0)
        board[befX][befY] = 0;
    }        
}


int main() {
    cin >> n >> t;
    cin >> r >> c >> d;
    int x=r;
    int y=c;
    int dirIndex=0;
    // Please write your code here.
    //보드판 초기화 (1이면 바둑판)
    vector<vector<int>> board(n,vector<int>(n+1,0));
    //방향 정하기
    if(d=='L'){
        dirIndex=2;
    }
    else if(d=='R'){
        dirIndex=0;
    }
    else if(d=='U'){
        dirIndex=1;
    }
    else if(d=='D'){
        dirIndex=3;
    }

    //초마다 이동하기
    for(int i=0;i<t;i++){
        Move(board,dirIndex,x,y);
    }

    cout<<x+1<<' '<<y+1;
    return 0;
}