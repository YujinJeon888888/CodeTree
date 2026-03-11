#include <iostream>
#include <algorithm>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Please write your code here.
    int maxNum=0;
    //for: element1
    for(int i=0;i<n;i++){
        int element1 = numbers[i];
        //for: element2 (if (j==i-1 || j==i+1 || j==i) continue;)
        for(int j=0;j<n;j++){
            if(j==i-1||j==i+1||j==i){
                continue;    
            }
            // numbers[i]+numbers[j]
            int num = numbers[i]+numbers[j];
            // max갱신
            maxNum=max(maxNum,num);
        }
    }
    cout<<maxNum;

    return 0;
}