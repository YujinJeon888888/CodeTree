#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class Info{
    public:
        string secret_code;
        char meeting_point;
        int meeting_time;

        Info(string secret_code, char meeting_point, int meeting_time){
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->meeting_time = meeting_time;
        }
}

int main() {
    Info info = new Info();

    cin >> info.secret_code >> info.meeting_point >> info.meeting_time;

    // Please write your code here.
    cout<<"secret code : "<<info.secret_code<<"\n";
    cout<<"meeting point : "<<info.meeting_point<<"\n";
    cout<<"time : "<<info.meeting_time<<'\n';

    return 0;
}