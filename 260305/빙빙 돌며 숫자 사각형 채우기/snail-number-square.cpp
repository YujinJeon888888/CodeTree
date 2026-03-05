#include <iostream>
#define MAX_NUM 100
#define DIR_NUM 4

using namespace std;

int n, m;
int arr[MAX_NUM][MAX_NUM]={0,};

//동 남 서 북
int dx[DIR_NUM] = {0,1,0,-1};
int dy[DIR_NUM] = {1,0,-1,0};

int curr_x=0, curr_y=0;
int dir;

bool InRange(int x,int y){
    return 0<=x&&x<n&&0<=y&&y<m;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    //초기값
    arr[curr_x][curr_y]=1;

    //n*m개 숫자 적기
    for(int i=2;i<=n*m;i++){
        //다음 위치값
        int next_x=curr_x+dx[dir],next_y=curr_y+dy[dir];

        //더이상 나아갈 수 없다면 시계방향 회전
        if(!InRange(next_x,next_y)||arr[next_x][next_y]!=0){
            dir=(dir+1)%4;
        }

        //그 다음 위치로 이동한 다음 배열에 올바른 값 채워넣기
        curr_x=curr_x+dx[dir]; curr_y=curr_y+dy[dir];
        arr[curr_x][curr_y]=i;
    }

    //출력
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }

    return 0;
}