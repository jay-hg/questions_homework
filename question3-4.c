#include <stdio.h>
#include <string.h>
#define LOCAL
/*int arr[10] = {0};
int in[10] = {0};*/
#define maxn 1010

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	int n,a[maxn],b[maxn];
	int countC1[10],countC2[10];
	int kase = 0;

	while(scanf("%d",&n) && n) {
		printf("Game %d:\n",++kase);
		memset(countC1,0,sizeof(countC1));
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			countC1[a[i]] ++;
		}

		for(;;) {
			memset(countC2,0,sizeof(countC2));
			int A=0,B=0;
			for(int i=0;i<n;i++) {
				scanf("%d",&b[i]);
				countC2[b[i]] ++;
				if(a[i] == b[i]) A++;
			}

			if(b[0] == 0) break;
			for(int d=1;d<=9;d++) {
				int c1=0,c2=0;

				if(countC1[d] < countC2[d]) B+=countC1[d];
				else B+= countC2[d];
			}
			printf("    (%d,%d)\n",A,B-A);
		}
	}
	/*int gameN=1;
	int n,i;
	int num,count=0,dif=0;
	int quit = 1;
	while(scanf("%d\n",&n) && n) {
		for(i=0;i<n;i++) {
			scanf("%d",&in[i]);
			arr[in[i]] = 1;
		}
		
		printf("\nGame %d:\n",gameN);
		for(;;) {
			count = 0;
			dif = 0;
			quit = 1;
			for(i=0;i<n;i++) {
				scanf("%d",&num);
				if(num != 0) quit=0;
				if(num == in[i]) {
					count++;
					arr[num] = 0;
				}
				else if(arr[num]) dif++;
			}
			if(quit) break;
			printf("    (%d,%d)\n",count,dif);
		}
		
		for(i=0;i<10;i++) {
			arr[i] = 0;
		}
		gameN ++;
	}*/
#ifdef LOCAL
	fclose(stdin);
	//fclose(stdout);
#endif
	return 0;
}
