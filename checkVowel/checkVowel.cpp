#include<stdio.h>

int main() {
	char check;
	printf("Enter a letter : ");
	scanf_s("%c", &check);

	if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u' || check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U') {
		printf("It's a vowel.");
	}
	else {
		printf("It's not a vowel.");
	}

	return 0;
}