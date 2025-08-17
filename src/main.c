#include <stdio.h>
#include <stdlib.h>

#include "randNumGen.h"

int main(int argc, char *argv[]) {
	if (argc != 3 || atoi(argv[1]) == 0 || atoi(argv[2]) == 0) {
		printf("Usage: %s [integer] [integer]\n\nFirst integer should be less than the second.\n", argv[0]);
		exit(1);
	}

	long long int int1, int2;
	int1 = atoi(argv[1]);
	int2 = atoi(argv[2]);

	long long int x = getRandomNumber(int1, int2);
	printf("%lld\n", x);

    return 0;
}
