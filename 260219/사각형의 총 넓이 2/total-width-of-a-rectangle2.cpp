#include <iostream>
#include <vector>
using namespace std;

int N;
int x1_arr[10], y1_arr[10];
int x2_arr[10], y2_arr[10];

int main() {
    cin >> N;
    vector<vector<bool>> board(200, vector<bool>(200, false));
    const int OFFSET=100;
    int answer=0;
    for (int i = 0; i < N; i++) {
        cin >> x1_arr[i] >> y1_arr[i] >> x2_arr[i] >> y2_arr[i];
        x1_arr[i]+=OFFSET;
        y1_arr[i]+=OFFSET;
        x2_arr[i]+=OFFSET;
        y2_arr[i]+=OFFSET;


        //좌표에 칠하기 (단, 두번째 좌표는 -1한 좌표까지 칠하기)
        for(int row=x1_arr[i];row<x2_arr[i];row++){
            for(int col=y1_arr[i];col<y2_arr[i];col++){
                board[row][col]=true;
            }
        }
    }

    // Please write your code here.
    for(const auto& row: board){
        for(const auto& col: row){
            if(col){
                answer+=1;
            }
        }
    }

    cout<<answer;
    
    return 0;
}