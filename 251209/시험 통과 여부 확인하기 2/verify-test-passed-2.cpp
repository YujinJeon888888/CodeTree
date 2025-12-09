#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int passResult=0;
    int studentNum;
    cin>>studentNum;
    for(int i=0;i<studentNum;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(((a+b+c+d)/4)<60){
            cout<<"fail"<<'\n';
        }
        else{
            cout<<"pass"<<'\n';
            passResult++;
        }
    }
    cout<<passResult;
    return 0;
}