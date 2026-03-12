#include <iostream>
#include <climits>//INT_MIN
#include <algorithm>//min
using namespace std;

int n;
int arr[20];

bool IsCarry(int a,int b){
    //for: 10으로 나눈 후 몫 구하기 
    while(true){
        int aShare=a/10;
        a/=10;
        int bShare=b/10;
        b/=10;
        //(만약 몫이 0이면 10으로 나머지 구하고 나머지끼리 더하여 결과낸 뒤 break)
        if(aShare==0||bShare==0){
            int aRemainder=a%10;
            int bRemainder=b%10;

            if(aRemainder+bRemainder>=10){
                return true;
            }

            break;
        }
        //몫*10으로 나머지 구하기 
        int divider=a<b?aShare*10:bShare*10;
        int aRemainder=a%divider;
        int bRemainder=b%divider;
        //나머지끼리 더하기
        //만약 10을 넘어가면 return true;
        if(aRemainder+bRemainder>=10){
            return true;
        }
    }
    //return false;
    return false;
}

bool IsCarry(int a,int b, int c){
    //for: 10으로 나눈 후 몫 구하기 
    while(true){
        int aShare=a/10;
        a/=10;
        int bShare=b/10;
        b/=10;
        int cShare=c/10;
        c/=10;
        //(만약 몫이 0이면 10으로 나머지 구하고 나머지끼리 더하여 결과낸 뒤 break)
        if(aShare==0||bShare==0||cShare==0){
            int aRemainder=a%10;
            int bRemainder=b%10;
            int cRemainder=c%10;

            if(aRemainder+bRemainder+cRemainder>=10){
                return true;
            }

            break;
        }
        //몫*10으로 나머지 구하기 
        int minShare=min({aShare,bShare,cShare});
        int divider=minShare*10;
        int aRemainder=a%divider;
        int bRemainder=b%divider;
        int cRemainder=c%divider;
        //나머지끼리 더하기
        //만약 10을 넘어가면 return true;
        if(aRemainder+bRemainder+cRemainder>=10){
            return true;
        }
    }
    //return false;
    return false;
}



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int maxNum=INT_MIN;
    //for: 숫자 1
    for(int i=0;i<n-2;i++){
        //for: 숫자 2
        for(int j=i+1;j<n-1;j++){
            //각 자리수를 더해서, 캐리가 발생하면 continue;
            if(IsCarry(arr[i],arr[j])){
                continue;
            }
            //for: 숫자 3
            for(int k=j+1;k<n;k++){
                //각 자리수를 더해서, 캐리가 발생하면 continue;
                if(IsCarry(arr[i],arr[j],arr[k])){
                    continue;
                }   
                //합 더하기
                int sum=arr[i]+arr[j]+arr[k];
                //max갱신
                maxNum=max(maxNum,sum);
            }
        }
    }
    if(maxNum==INT_MIN){
        cout<<-1;
        return 0;
    }
    
    cout<<maxNum;
            
            

    return 0;
}