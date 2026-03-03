#include <iostream>

using namespace std;

string dirs;

//동남서북으로 정의되어있다고 가정
void Rotate(char direction, int &dirIndex){
    if(direction=='L')//반시계방향
    {
        dirIndex = (dirIndex -1 + 4 )%4;
    }
    else{//시계방향
        dirIndex = (dirIndex + 1) %4;
    }
}

void ForwardMove(int& dirIndex, int& x, int& y){
    x += dx[dirIndex];
    y += dy[dirIndex];
}

int main() {
    cin >> dirs;

    // Please write your code here.
    //동남서북
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int dirIndex = 3;
    int x = 0, y = 0;
    for(const auto& val:dirs){
        if(val=='F'){
            ForwardMove(dirIndex,x,y);
        }
        else{
            Rotate(val, dirIndex);
        }
    }

    cout<<x<<' '<<y;
    
    return 0;
}