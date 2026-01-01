#include <iostream>

using namespace std;

int N;

//1부터 n까지의 sum
int sum(int n){
    //종료조건
    if(n==1){
        return 1;
    }

    return sum(n-1)+n;
}

int main() {
    cin >> N;

    cout<<sum(N);
    return 0;
}