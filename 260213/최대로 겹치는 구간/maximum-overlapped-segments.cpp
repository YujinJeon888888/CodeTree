#include <iostream>
#include <vector>
using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    vector<int> line(200,0);
    int max=-1;
    int OFFSET = 100;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        x1[i] += OFFSET;
        x2[i] += OFFSET;
        for(int j=x1[i];j<x2[i];j++){
            line[j]+=1;
        }
    }

    // Please write your code here.
    for(int i=0;i<200;i++){
        if(max<line[i]){
            max=line[i];
        }
    }

    cout<<max;

    return 0;
}