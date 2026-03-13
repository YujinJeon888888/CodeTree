#include <iostream>

using namespace std;

int n;
int arr[100+1];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int result=0;
    //for: 시작점
    for(int i=1;i<=n;i++){
        //for: 끝점
        for(int j=i;j<=n;j++){
            // for: 시작점부터 끝점까지 더하고 
            int sum=0; float avr=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            
            //평균내기(int)
            avr=(float)sum/(j-i+1);
            //for: 평균이 시작점부터 끝점 중 하나의 원소와 같은지 확인
            for(int k=i;k<=j;k++){
                //같으면: result++
                if(arr[k]==avr){
                    result++;
                    break;
                }
            }
        }
    }
        
            

    //result출력
    cout<<result;
    return 0;
}