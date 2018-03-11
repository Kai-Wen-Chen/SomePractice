#include <stdio.h>

int main() {
	int N;
	
	while (scanf("%d", &N) == 1 && N != 0) {
		int N_binary[33] = {0};
		int N_cnt = 0, ans = 0;
		
		while (N > 0) {
			N_binary[N_cnt++] = N%2;
			N /= 2;
		}
		
		if (N_binary[0] == 0) ans = 0;
		else {
			ans = 1;
			
			for (; ans<=N_cnt; ans++) {
				if (N_binary[ans] == 0) break;
			}
		}
		
		printf("%d\n", ans);
	}
}
