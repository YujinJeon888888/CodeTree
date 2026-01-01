#include <iostream>

using namespace std;

int N;

int sum=0;

int Divide(int num){
    //종료조건: num==1
    if(num==1){
        return 1;
    }

    if(num&1==1){
        sum+=Divide(num/3);
    }
    else{
        sum+=Divide(num/2);
    }
}

int main() {
    cin >> N;
    Divide(N);

    cout<<sum;

    return 0;
}