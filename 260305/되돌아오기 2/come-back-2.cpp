#include <iostream>
#include <string>
#include <queue>

using namespace std;

string commands;
int dCol[4]={1,0,-1,0};//동남서북
int dRow[4]={0,1,0,-1};

//방향회전
void Rotate(int& dirIndex, char command)
{
    if(command=='F'){
        return;
    }
    if(command=='L'){
        //반시계방향
        dirIndex=(dirIndex-1+4)%4;
        return;
    }
    if(command=='R'){
        //시계방향
        dirIndex=(dirIndex+1)%4;
        return;
    }
}



int main() {
    cin >> commands;
    queue<char> commandsQ;
    int dirIndex=3;
    int time=0;
    int cCol=0;
    int cRow=0;
    for(int i=0;i<commands.length();i++){
        commandsQ.push(commands[i]);
    }

    // Please write your code here.
    while(!commandsQ.empty()){
        //커맨드대로 방향 회전
        Rotate(dirIndex,commandsQ.front());
        //타임증가
        time++;
        //만약 F가 아니면 이동 x
        if(commandsQ.front()!='F'){
            //소모한 방향 pop
            commandsQ.pop();
            continue;
        }
        //소모한 방향 pop
        commandsQ.pop();
        
        
        //이동
        cCol+=dCol[dirIndex];
        cRow+=dRow[dirIndex];
        
        //만약 이동 후 0,0이면, 시간 출력 후 return
        if(cCol==0 && cRow==0){
            cout<<time;
            return 0;
        }
    }
    
    cout<<-1;

    return 0;
}