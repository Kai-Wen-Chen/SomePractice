#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int input, value, cnt = 0;
    
    cin >> value;
    while (cin >> input) nums.push_back(input);
    
    for (int i=0; i<nums.size(); i++) {
        if (nums[i] == value) cnt++;
        else nums[i-cnt] = nums[i];
    }

    for (int i=0; i<nums.size()-cnt; i++) cout << nums[i] << " ";
    cout << endl;
}
