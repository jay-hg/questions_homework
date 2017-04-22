#include <stdio.h>
#include <string.h>
#define LOCAL

char str[102] = "";
int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	while(scanf("%s\n",str) != EOF) {
		int cur = 1,min = 0;
		int i;
		for(;cur<strlen(str);cur++) {
			for(i=0;i<strlen(str);i++) {
				int curX = cur + i;
				int minX = min + i;
				if(curX > strlen(str)-1) curX = curX-strlen(str);
				if(minX > strlen(str)-1) minX = minX-strlen(str);
				if(str[curX]<str[minX]) {
					min = cur;
					break;
				} 
				else if(str[curX]>str[minX]) break;
			}
		}
		for(i=0;i<strlen(str);i++) {
			int idx = min+i;
			if(idx>strlen(str)-1) idx = idx-strlen(str);
			printf("%c",str[idx]);
		}
		printf("\n");
	}
#ifdef LOCAL
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
