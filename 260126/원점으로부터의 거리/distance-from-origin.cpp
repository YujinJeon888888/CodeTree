#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//좌표클래스 
struct Coordinate{
    int x;
    int y;
    int number;
};

int N;


//맨하턴 거리 구하는 함수
int CalculateDistance(const Coordinate& a, const Coordinate& b){
    return abs(a.x-b.x)+abs(a.y-b.y);
}

//정렬함수
bool cmp(const Coordinate& a, const Coordinate& b){
    //a,b에 대해 원점과의 맨하턴 거리 구하기
    Coordinate zero = {0,0};
    int aDistance = CalculateDistance(zero, a);
    int bDistance = CalculateDistance(zero, b);

    //aDistance, bDistance를 비교하기
    if(aDistance!=bDistance){
        return aDistance<bDistance;
    }
    return a.number<b.number;
}

int main() {
    cin >> N;
    vector<Coordinate> coordinates(N);

    for (int i = 0; i < N; i++) {
        cin >> coordinates[i].x >> coordinates[i].y;
        coordinates[i].number = i+1;
    }

    // Please write your code here.

    //정렬
    sort(coordinates.begin(),coordinates.end(),cmp);

    //출력
    for(int i=0;i<N;i++){
        cout<<coordinates[i].number<<'\n';
    }

    return 0;
}
