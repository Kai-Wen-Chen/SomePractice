#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	vector<int> nums;
	map<int, int> m;
	int numToFind, target;
	int input;
	
	while (cin >> input) {
		if (input != -999) {
			nums.push_back(input);
		} else {
			cin >> target;
			
			for (int i=0; i<nums.size(); i++) {
				numToFind = target - nums[i];
				if (m.find(numToFind) != m.end()) {
					cout << "[" << m[numToFind] << ", ";
					cout << i << "]" << endl;
					break;
				} else {
					m[nums[i]] = i;
				}
			}
			
			nums.clear();
			m.clear();
		}
	}
}
