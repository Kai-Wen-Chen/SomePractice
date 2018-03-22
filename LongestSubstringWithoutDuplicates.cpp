#include <iostream>
#include <string>
using namespace std;

int main() {
	string ans = "";
	string tmp = "";
	string input;
	int place = 0;
	
	while (cin >> input) {
		for (int i=0; i<input.length(); i++) {
			if (tmp.find(input[i]) == string::npos) tmp += input[i];
			else {
				if (ans.length() < tmp.length()) ans = tmp;
				tmp = "";
				tmp += input[++place];
				i = place;
			}
		}
		
		if (ans.length() < tmp.length()) ans = tmp;
		cout << ans << endl;
		ans = "";
		tmp = "";
	}
} 
