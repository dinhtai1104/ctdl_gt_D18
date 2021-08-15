#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i,j;
	for (i = 1; i <= n; i++) {
		printf ("%d ", i);
		int truoc = i;
		for (j = 1; j < i; j++) {
			printf ("%d ", truoc + (n - j));
			truoc = truoc + (n - j);
		}
		printf ("\n");
	}
}
