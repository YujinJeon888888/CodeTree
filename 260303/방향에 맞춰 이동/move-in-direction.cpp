#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    //동남서북
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    int x=0,y=0;//current
    int dirIndex = 0; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
        if(dir[i]=='E'){
            dirIndex=0;
        }
        if(dir[i]=='S'){
            dirIndex=1;
        }
        if(dir[i]=='W'){
            dirIndex=2;
        }
        if(dir[i]=='N'){
            dirIndex=3;
        }
        
        x+=dx[dirIndex];
        y+=dy[dirIndex];
    }

    // Please write your code here.
    cout<<x<<' '<<y;
    return 0;
}