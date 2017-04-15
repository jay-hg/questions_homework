#include <stdio.h>
int main() {
    int n,m;
	int i,j=1;
    while(scanf("%d %d",&n,&m) && (n!=0 && m!=0)) {
		double sum = 0.0;
		for(i=n;i<=m;i++) {
			sum += (1.0/i)*(1.0/i);
		}
		printf("case%d:%.5f\n",j,sum);
		j++;
    }
    return 0;
}
