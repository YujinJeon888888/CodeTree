#include <iostream>
#include <cmath>//abs

using namespace std;

int N;
int a, b, c;

int main() {
    cin >> N;
    cin >> a >> b >> c;

    // Please write your code here.
    int count=0;
    //for: 일의자리
    for(int i=1;i<=N;i++){
        //for: 십의자리
        for(int j=1;j<=N;j++){
            //for: 백의자리
            for(int k=1;k<=N;k++){
                if(abs(a-i)<=2|| abs(b-j)<=2|| abs(c-k)<=2)
                    count++;  
            }        
        }
    }
    cout<<count;
            
    return 0;
}