#include <stdio.h>

int DevideSpace(int);
int DevidePlane(int);

int main () {
	int n;
	
	while ((scanf("%d", &n)) != EOF) {
		printf("%d\n", DevideSpace(n));
	}	
}

int DevideSpace(int n) {
	if (n == 1) return 2;
	else return DevideSpace(n-1) + DevidePlane(n-1);
	//n planes could generate no more than n-1 cross lines
	//each cross line could generate some planes, see below
	//the n-th plane create those new spaces which resulted from cross lines   
} 

int DevidePlane(int n) { //n non-parallel lines could devide a plane into n*(n+1)/2 + 1 planes
	return n*(n+1)/2 + 1;
}
