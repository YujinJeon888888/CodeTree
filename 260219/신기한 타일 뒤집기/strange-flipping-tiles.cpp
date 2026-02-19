#include <iostream>
#include <vector>
using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    vector<int> board(1000'00,0);
    int index=1000'00/2;
    int whiteCount=0;
    int blackCount=0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        //x[i]만큼 dir[i]로 이동, 흰색(왼쪽)이면 -1 검은색(오른쪽)이면 1
        for(int j=0;j<x[i];j++){
            if(dir[i]=='R'){
                board[index]=1;
                if(j!=x[i]-1){
                    index+=1;
                }
            }
            else{
                board[index]=-1;
                if(j!=x[i]-1){
                    index-=1;
                }
            }
        }
    }

    // Please write your code here.
    for(const auto& val: board){
        if(val==-1){
            whiteCount+=1;
        }
        else if(val==1){
            blackCount+=1;
        }
    }
    cout<<whiteCount<<' '<<blackCount;

    return 0;
}