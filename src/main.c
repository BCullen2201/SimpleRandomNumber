#include <stdio.h>
#include <stdlib.h>

#include "randNumGen.h"

int main() {
	int x = getRandomNumber(-1000000,1000000);
	printf("%d\n", x);

    return 0;
}
