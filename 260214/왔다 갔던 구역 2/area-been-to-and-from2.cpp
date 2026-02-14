#include <iostream>
#include <vector>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;
    vector<int> line(2000,0);
    int index=1000;
    int answer=0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        for(int j=x[i];j>0;j--){
            if(dir[i]=='R'){
                line[index]++;
                index++;
            }
            else{
                index--;
                line[index]++;
            }
        }
    }

    for(int i=0;i<2000;i++){
        if(line[i]>1){
            answer+=1;
        }
    }

    // Please write your code here.
    cout<<answer;
    return 0;
}