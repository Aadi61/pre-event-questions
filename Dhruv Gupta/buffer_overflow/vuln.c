#include <stdio.h>
#include <string.h>

char FLAG[100];

void initFlag() {
	strcpy(FLAG, "passwd{0v3rf10w_i5_3a5y}");
}

int main() {
	initFlag();
	char pass[10];
	int val=0;
	char inp[15];

	printf("Enter a string: ");
	scanf("%s", inp);
	strcpy(pass, inp);

	if (val) {
		printf("%s\n", FLAG);
	}
	else {
		printf("Try again.\n");
	}

	return 0;
}
