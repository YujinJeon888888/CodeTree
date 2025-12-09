#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<3;i++){
        char c;
        int degree;
        cin>>c>>degree;
        //증상o
        if(c=='Y'){
            //37도이상
            if(degree>=37){
                a++;
            }
            //이상x
            else{
                c++;
            }
        }
        //증상x
        else{
            if(degree>=37){
                b++;
            }
            else{
                d++;
            }
        }
    }

    cout<<a<<' '<<b<<' '<<c<<' '<<d<<' ';
    if(a>=2){
        cout<<'E';
    }
    return 0;
}