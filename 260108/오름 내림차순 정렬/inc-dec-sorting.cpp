#include <iostream>

using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    int size = sizeof(nums)/typeof(nums);
    cout<< sort(nums,nums+size) << '\n';
    cout<< sort(nums,sums+size,greater<int>());

    return 0;
}
