#include <iostream>
#include <algorithm>//max
#include <unordered_set>
using namespace std;

int N;
int arr[20][20];


int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    // Please write your code here.
    int maxCoin=0;
    //for: 기준행1
    for(int row1=0;row1<N;row1++){
        //for: 기준열1
        for(int col1=0;col1<N-2;col1++){
            //for: 기준행2
            for(int row2=0;row2<N;row2++){
                //for: 기준열2
                for(int col2=0;col2<N-2;col2++){
                    //col 겹치면 continue
                    if(row1==row2){
                        unordered_set<int> s;
                        for(int i=0;i<3;i++){
                            s.insert(col1+i);
                            s.insert(col2+i);
                        }
                        if(s.size()!=6){
                            continue;
                        }
                    }
                    
                    //값 세기
                    int nextCol1=col1;
                    int nextCol2=col2;
                    int count=0;
                    for(int i=0;i<3;i++){
                        if(arr[row1][nextCol1]==1){
                            count++;
                        }
                        if(arr[row2][nextCol2]==1){
                            count++;
                        }
                        nextCol1++;
                        nextCol2++;
                    }
                    //maxCount갱신
                    maxCoin = max(maxCoin,count);

                }
            }
        }
    }
        
    cout<<maxCoin;
                
    return 0;
}