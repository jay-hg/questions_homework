#include <stdio.h>
int main() {
	int a,b,c;
	int m=0;
	while(scanf("%d %d %d",&a,&b,&c)) {
		m++;
		printf("case%d:",m);
		int i;
		for(i=10;i<101;i+=1) {
			if(i%7==c && i%5==b && i%3==a) {
				printf("%d\n",i);
				break;
			}
		}
		if(i == 101) printf("No answer\n");
	}
	return 0;
}
