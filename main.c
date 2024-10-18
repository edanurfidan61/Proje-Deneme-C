#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age >= 18) {
		printf("You are not underage");
	} else {
		printf("You are underage");
	}

	return 0;
}
