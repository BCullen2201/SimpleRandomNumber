#include <stdio.h>
#include <stdlib.h>

#include "randNumGen.h"

int main() {
	long long int x = getRandomNumber(-1000000,1000000);
	printf("%lld\n", x);

    return 0;
}
