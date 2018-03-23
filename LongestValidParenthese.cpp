#include <iostream>
#include <stack>
using namespace std;

int main() {
	string input;

	while (cin >> input) {
		stack<int> stk;
		
		for (int i=0; i<input.length(); i++) {
			if (stk.empty()) stk.push(i);
			else {
				if (input[i] == '(') stk.push(i);
				else {
					if (input[stk.top()] == '(') stk.pop();
					else stk.push(i);
				}
			}
		}
		
		if (stk.empty()) cout << input.length() << endl;
		else {
			int start, end;
			int ans = 0;
			
			end = stk.top();
			ans = (input.length()-end-1 > ans) ? input.length()-end-1 : ans;
			stk.pop();
			
			while (!stk.empty()) {
				start = stk.top();
				ans = (end-start-1 > ans) ? end-start-1 : ans;
				end = start;
				stk.pop();
			}
			
			ans = (end > ans) ? end : ans;
			cout << ans << endl;
		}		
	}
} 
