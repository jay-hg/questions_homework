#include <stdio.h> 
#include <string.h>
#include <ctype.h>
char s[30];
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char getrev(char ch) {
	if(isalpha(ch)) return rev[ch-'A'];
	return rev[ch-'0'+25];
}
int main() {
	while(scanf("%s",s) == 1) {
		int i;
		int pal=1;
		int mir = 1;
		int n=strlen(s);
		for(i=0;i<(n+1)/2;i++) {
			if(s[i] != s[n-i-1]) pal = 0;
			if(getrev(s[i]) != s[n-i-1]) mir = 0;
			if(!(pal || mir)) break;
		}
		printf("%s --",s);
		if(pal) {
			if(mir) printf("is a mirrored palindrome.\n");
			else printf("is a regular palindrome.\n");
		} else {
			if(mir) printf("is a mirrored string.\n");
			else printf("is not a palindrome.\n");
		}
	}
}