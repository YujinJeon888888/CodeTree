#include <iostream>
#include <algorithm>
using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> grid[i][j];

    // Please write your code here.
    int maxCount=0;
    // for: 행
    for(int row=0;row<N;row++){
        //for: 열(최대: -2까지)
        for(int col=0;col<N-2;col++){
            //grid[i][j]+grid[i][j+1]+grid[i][j+2]가 max인지 확인하여 맥시멈갱신
            maxCount=max(maxCount,grid[row][col]+grid[row][col+1]+grid[row][col+2]);
        }
    }
    cout<<maxCount;   
            
        
    return 0;
}