#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    cin >> n;
    vector<vector<bool>> board(n,vector<bool>(100+1,false));

    for (int i = 0; i < n; i++) {
        int start;
        int end;
        cin>>start>>end;
        for(int j=start;j<=end;j++){
            board[i][j]=true;
        }
    }
    
    for(int j=1;j<=100;j++){
        int trueCount=0;
        for(int i=0;i<n;i++){
            if(board[i][j]){
                trueCount++;
            }
        }
        if(trueCount==n){
            cout<<"Yes";
            return 0;
        }
        
    }

    // Please write your code here.
    cout<<"No";
    return 0;
}