#include <iostream>
#include <string>
using namespace std;

string CountAndSay(int);

int main() {
  int n;
  
  while (cin >> n) {
    cout << CountAndSay(n) << endl;
  }
}

string CountAndSay(int n) {
  string ans = "";
  char c;
  int cnt = 1;
  
  if (n == 1) return "1";
  
  string tmp = CountAndSay(n-1);
  c = tmp[0];
  
  for (int i=1; i<tmp.length(); i++) {
    if (tmp[i] == c) cnt++;
    else {
      ans += (cnt+48);
      ans += c;
      cnt = 1;
      c = tmp[i];
    }
  }
  
  if (cnt != 0) {
    ans += (cnt+48);
    ans += c;
  }
  
  return ans;
}
