#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int count=0;
    //for: 픽1
    for(int i=0;i<N;i++){
        //for: 픽2
        for(int j=i+1;j<N;j++){
            //for: 픽3
            for(int k=j+1;k<N;k++){
                //확인: 픽1<=픽2<=픽3인가?
                //true: count++;
                if(A[i]<=A[j]&&A[j]<=A[k]){
                    count++;
                }
            }
        }
    }
    cout<<count;    
                
                    
    return 0;
}