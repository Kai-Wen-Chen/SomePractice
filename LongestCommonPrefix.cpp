#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string lcp = "";
	string input;
	vector<string> strs;
    int j = 0;
    bool over = false;
    
    while (cin >> input) strs.push_back(input);
    
    if (strs.empty());
    else if (strs.size() == 1) lcp = strs[0];
        
    else {
    	while (!over) {
	    	char c = strs[0][j];
	        
	        for (int i=1; i<strs.size(); i++) {
	            if (j == strs[i].length()) {
	                over = true;
	                break;
	            }
	                
	            if (c != strs[i][j]) {
	                over = true;
	                break;
	            }
	        }
	            
	    	if (!over) lcp += c;
	        j++;
	    }
	}
        
	cout << lcp << endl;
} 

