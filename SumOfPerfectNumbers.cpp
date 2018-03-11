#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int testNum;
	int a, b;
	
	while (cin >> testNum) {
		for (int i=0; i<testNum; i++) {
			cin >> a >> b;
			
			int ans = 0;
			for (int j=a; j<=b; j++) {
				if ((sqrt(j) - (int) sqrt(j)) == 0.0) ans += j; 
			}
			
			cout << "Case " << i+1 << ": " << ans << endl;
		}
	}
}
