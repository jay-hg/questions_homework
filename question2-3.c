#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++) {
    	for(j=0;j<i;j++)
    		printf(" ");
    	for(j=0;j<2*(n-i)-1;j++)
    		printf("*");
    	printf("\n");
    }
    return 0;
}
