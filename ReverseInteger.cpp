#include <iostream>
using namespace std;

int main() {
	int input;
	long long ans = 0;
	
	while (cin >> input) {
		ans = 0;
		
		while (input != 0) {
			ans = ans * 10 + input % 10;
			input /= 10;
		}
		
		if (ans > INT_MAX || ans < INT_MIN) ans = 0;
		cout << ans << endl;
	}
} 
