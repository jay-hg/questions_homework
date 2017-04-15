#include <stdio.h>
int main() {
    int a,b,c;
	int j=1;
    while(scanf("%d %d %d",&a,&b,&c) && (a!=0 && b!=0 && c!=0)) {
		printf("case%d:%d.",j,a/b);
		while(c-- > 1) {
			printf("%d",(a *= 10)/b);
			a %= b;
		}
		c = ((a *= 10)/b);
		a %= b;
		if((a *= 10)/b >= 5) {
			c++;
		}
		printf("%d\n",c);
		j++;
    }
    return 0;
}
