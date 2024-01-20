#include <stdio.h>
#include <string.h>

char FLAG[100];
char KEY[100];

void initFlag() {
	strcpy(FLAG, "c7162c4a0f122ac3cdd9a0329a0c45177d3f539df8fab7993b57cdb2a7ed01f5");
	strcpy(KEY, "ae9d5a1bf9b93550f36791662eae0e775b2e2c321593e0b940b22e159662e676");
}

int main() {
	initFlag();
	char pass[10];
	int val = 0;
	char inp[15];

	printf("Enter a string: ");
	scanf("%s", inp);
	strcpy(pass, inp);

	if (val == 0x123) {
		printf("%s\n", KEY);
	}
	else if (val == 0x456) {
		printf("%s\n", FLAG);
	}
	else {
		printf("Try again.\n");
	}

	return 0;
}
