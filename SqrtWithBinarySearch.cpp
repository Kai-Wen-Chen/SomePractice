#include <iostream>
using namespace std;

int main() {
	int x;
	
	while (cin >> x) {
		if (x == 0) {
			cout << "0" << endl;
			continue;
		}
		
		int low = 1;
		int high = INT_MAX;
		
		while (true) {
			int mid = low + (high - low) / 2;
			if (mid > x / mid) high = mid - 1;
			else if (mid + 1 > x / (mid + 1)) {
				cout << mid << endl;
				break;
			} else low = mid + 1;
		}
	}
} 
