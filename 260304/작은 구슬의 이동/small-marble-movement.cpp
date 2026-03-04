#include <iostream>
using namespace std;

int n,t;
int r,c;
char d;

//동남서북
int dRow[4]={0,-1,0,1};
int dCol[4]={1,0,-1,0};

//방향 플립
int IfHitReturnNewDirIndex(int dirIndex){
    //동남서북
    if(dirIndex==0) return 2;
    if(dirIndex==1) return 3;
    if(dirIndex==2) return 0;
    if(dirIndex==3) return 1;
    return dirIndex;
}

//범위체크
bool IsInRange(int row,int col){
    if(row<=0||row>n) return false;
    if(col<=0||col>n) return false;
    return true;
}

//이동
void Move(int& dirIndex, int& x, int& y){
    int tempX=x+dCol[dirIndex];
    int tempY=y+dRow[dirIndex];

    if(IsInRange(tempX,tempY)==false){
        dirIndex=IfHitReturnNewDirIndex(dirIndex);
    }
    else{
        x=tempX;
        y=tempY;
    }
}

int main(){
    cin>>n>>y;
    cin>>r>>c>>d;

    int x=r;
    int y=c;
    int dirIndex=0;

    //방향3037void Move(int& dirIndex, int& x, int& y){    else{

틀렸습니다$0
    if(d=='R') dirIndex=0;
    else if(d=='D') dirIndex=1;
    else if(d=='L') dirIndex=2;
    else if(d=='U') dirIndex=3;

    //초마다 이동
    for(int i=0;i<t;i++){
        Move(dirIndex,x,y);
    }

    cout<<x<<' '<<y;
    return 0;
}