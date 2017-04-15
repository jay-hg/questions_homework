#include <stdio.h>
//#define LOCAL

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n=100;
	for(;n<1000;n++) {
		int c = n%10;
		int b = (n%100)/10;
		int a = n/100;
		if(n==a*a*a+b*b*b+c*c*c) printf("%d\n",n);
	}
	return 0;
}
