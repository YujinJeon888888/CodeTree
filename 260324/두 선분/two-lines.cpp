#include <iostream>

using namespace std;

int x1, x2, x3, x4;

bool IsOverlapped(int x1,int x2,int x3,int x4){
    //안겹치는 경우
    //x2<x3
    if(x2<x3){
        return false;
    }
    //x1>x4
    if(x1>x4){
        return false;
    }
    return true;
}

int main() {
    cin >> x1 >> x2 >> x3 >> x4;

    // Please write your code here.
    if(IsOverlapped(x1,x2,x3,x4)){
        cout<<"intersecting";
    }
    else{
        cout<<"nonintersecting";
    }
    return 0;
}