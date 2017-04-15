#include <stdio.h>
int arr[10] = {0};
void clean() {
	int i;
	for(i=0;i<10;i++) {
		arr[i] = 0;
	}
}
int main() {
    int a,b,c;
    int x,y,z;
    int num,i;
    for(num=123;3*num<=987;num++) {
    	clean();
    	x = a = num;
    	y = b = 2*a;
    	z = c = 3*a;
    	
    	for(i=0;i<3;i++) {
    		if(++arr[a%10] > 1) break;
    		a /= 10;
    		
    		if(++arr[b%10] > 1) break;
    		b /= 10;
    		
    		if(++arr[c%10] > 1) break;
    		c /= 10;
    	}
    	if(arr[0]!=0) continue;
    	for(i=1;i<10;i++) {
    		if(arr[i] != 1) break;
    	}
    	if(i==10) printf("%d %d %d\n",x,y,z);
    }
    return 0;
}
