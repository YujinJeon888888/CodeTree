#include <iostream>
#include <vector>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    vector<int> line(n,0);
    int max=-1;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for(int j=x1[i];j<=x2[i];j++){
            line[j] +=1;
        }
    }

    // Please write your code here.
    for(int i=0;i<line.size();i++){
        if(max<line[i]){
            max=line[i];
        }
    }
    cout<<max;
   
    return 0;
}