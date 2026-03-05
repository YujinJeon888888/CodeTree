#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

//방향
int dCol[4]={1,0,-1,0};//동 남 서 북
int dRow[4]={0,1,0,-1};

int ChangeDirIntoDirIndex(char dir){
    if(dir=='N'){
        return 3;
    }
    else if(dir=='E'){
        return 0;
    }
    else if(dir=='S'){
        return 1;
    }
    else if(dir=='W'){
        return 2;
    }
    return -1;
}

int main() {
    int curRow=0,curCol=0,time=0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
        
        int dirIndex=ChangeDirIntoDirIndex(dir[i]);
        //방향대로 거리만큼 이동 (for문으로 1씩 이동)
        for(int j=0;j<dist[i];j++){
            curRow+=dRow[dirIndex];
            curCol+=dCol[dirIndex];
            //타임 ++
            time++;
            //체크: row==0 && col == 0인가? -> cout << 타임 
            if(curRow==0&&curCol==0){
                cout<<time;
                return 0;
            }    
        }
        
    }

    //cout<<-1;
    cout<<-1;
    return 0;
}