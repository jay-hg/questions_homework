#include <stdio.h>
//#define LOCAL
#define N 100000

int arr[N+10] = {0};
int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i,a,num=0;
	for(i=1;i<=N-36;i++) {
		a = i;
		num = i+a%10;
		while((a /= 10) != 0) {
			num += a%10;
		}
		if(!arr[num]) arr[num] = i;
	}
	
	int n;
	while(scanf("%d",&n)) {
		printf("%d",arr[n]);
	}
#ifdef LOCAL
	fclose(stdin);
	fclose(stdout);
#endif
	return 0;
}
