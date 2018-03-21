#include <iostream>
#include <map>
using namespace std;

int climb(int x);
map<int, int> record;

int main() {
	int x;
	
	while (cin >> x) {
		cout << climb(x) << endl;
	}
}

int climb(int x) {
	if (x < 3) return x;
	else {
		if (record.find(x-1) == record.end()) record[x-1] = climb(x-1);
		if (record.find(x-2) == record.end()) record[x-2] = climb(x-2);
		
		return record[x-1] + record[x-2];
	}
}
