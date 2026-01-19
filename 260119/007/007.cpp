#include <iostream>
#include <string>
#include <tuple>
using namespace std;

string secret_code;
char meeting_point;
int meeting_time;

int main() {
    cin >> secret_code >> meeting_point >> meeting_time;

    // Please write your code here.
    tuple<string,char,int> t = make_tuple(secret_code,meeting_point,meeting_time);
    cout<<"secret code : "<<get<0>(t)<<'\n';
    cout<<"meeting point : "<<get<1>(t)<<'\n';
    cout<<"time : "<<get<2>(t)<<'\n';

    return 0;
}