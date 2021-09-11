#include <stdio.h>

#define EXIT_VALUE 0

void showDataTypeSize();

void showExitMessage();

int main() {
	showDataTypeSize();
	showExitMessage();
	return EXIT_VALUE;
}

void showDataTypeSize() {
	char character;
	int number;
	float decimal;
	double precision;
	printf("The size of each basic data types in your machine is:  \n\n");
	printf("\tDATA TYPE \tSIZE(bytes)\n");
	printf("\t  char\t\t    %d\n", sizeof(character));
	printf("\t  int\t\t    %d\n", sizeof(number));
	printf("\t  float\t\t    %d\n", sizeof(decimal));
	printf("\t  double\t    %d\n", sizeof(precision));

}

void showExitMessage() {
	printf("\nPress ENTER to finish...");
	fflush(stdout);
	getchar();
}
