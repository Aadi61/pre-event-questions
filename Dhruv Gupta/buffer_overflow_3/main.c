// only main function has been provided

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
