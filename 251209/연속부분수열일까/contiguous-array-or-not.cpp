#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int aNum, bNum;
    cin>>aNum>>bNum;
    vector<int> aArr(aNum);
    vector<int> bArr(bNum);
    for(int i=0;i<aNum;i++){
        int num;
        cin>>num;
        aArr[i]=num;
    }
    for(int i=0;i<bNum;i++){
        int num;
        cin>>num;
        bArr[i]=num;
    }

    //연속부분수열 판단
    //1. A를 순회한다
    //2. 순회 중, B[0]을 만나면, for(int i=만난인덱스+1;i<B.size()-1;i++)해서 
    //A[i]가 B[++count]과 같은지 확인 (count는 0으로 초기화)
    //여기서, 인덱스가 벗어난다면 "No"출력 후 return
    for(int i=0;i<aArr.size();i++){
        if(aArr[i]==bArr[0]){
            for(int count=1, index=i+1;count<bArr.size();count++, index++){
                if(index>=aArr.size()){
                    cout<<"No";
                    return 0;
                }
                if(aArr[index]!=bArr[count]){
                    cout<<"No";
                    return 0;
                }
            }
            cout<<"Yes";
            return 0;
        }
    }
    

    return 0;
}