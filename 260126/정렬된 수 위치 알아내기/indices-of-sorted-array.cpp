#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Sequance{
    public:
        int value;
        bool find = false;
};


int N;

bool cmp(const Sequance& a, const Sequance& b){
    return a.value<b.value;
}

int main() {
    cin >> N;
    vector<Sequance> sequances(N);
    vector<Sequance> temp;
    for (int i = 0; i < N; i++) {
        cin >> sequances[i].value;
    }
    temp = sequances;

    // Please write your code here.
    //정렬
    sort(sequances.begin(),sequances.end(),cmp);

    for(int i=0;i<N;i++){
        int find = temp[i].value;
        for(int j=0;j<N;j++){
            if(find==sequances[j].value && sequances[j].find==false){
                cout<<j+1<<' ';
                sequances[j].find = true;
                break;
            }
        }
    }
 

    return 0;
}
