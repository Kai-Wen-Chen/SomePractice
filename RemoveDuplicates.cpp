#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input, cnt = 0;

    while (cin >> input) nums.push_back(input);

    for (int i=1; i<nums.size(); i++) {
        if (nums[i] == nums[i-1]) cnt++;
        else nums[i-cnt] = nums[i];
    }

    for (int i=0; i<nums.size()-cnt; i++) cout << nums[i] << " ";
    cout << endl;
}
