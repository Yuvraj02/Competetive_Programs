#include <stdio.h>
#include <conio.h>
void main() {
	int i,j,k,samp=1;
	for (i=1; i<=5; i++) {
		for (k=samp; k<=5; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
	samp = 1;
	for (i=4; i>=1; i--) {
		for (k=samp; k>=0; k--) {
			printf(" ");
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
	getch();
}