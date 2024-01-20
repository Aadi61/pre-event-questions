#include <stdio.h>
#include <string.h>

char FLAG[100];

void initflag() {
	strcpy(FLAG, "cGFzc3dke2ZpeDNkX2k3XzV0aTExX2JyMGszfQo=");
}

int main() {
	initflag();
	char pass[10];
	int val=0;
	char inp[15];

	printf("Enter a string: ");
	scanf("%s", inp);
	strcpy(pass, inp);

	if (val == 0xdeadbeef) {
		printf("%s\n", FLAG);
	}
	else {
		printf("Try again.\n");
	}

	return 0;
}
