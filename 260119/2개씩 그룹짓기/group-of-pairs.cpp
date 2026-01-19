#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int nums[2000];

int main() {
    
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    vector<pair<int,int>> _pair(N);

    // Please write your code here.
    // 1. 오름차순 정렬
    sort(nums,nums+2*N);
    // 2. 양 방향으로 조합만들어 가운데로 수렴 -> 저장하기
    for(int i=0,j=2*N-1;i<N;i++,j--){
        _pair[i].first = nums[i];
        _pair[i].second = nums[j];
    }
    // 3. 그 중 최댓값
    pair<int,int> result =  *max_element(_pair.begin(),_pair.end(),[](const pair<int,int> &a, const pair<int,int> &b){
        return((a.first+a.second)<(b.first+b.second));
    });

    cout<<result.first+result.second;

    return 0;
}
