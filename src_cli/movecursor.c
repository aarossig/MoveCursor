#include <stdio.h>
#include "../src_lib/movecursor.h"

void usage() {
	printf("Usage: movecursor x y\n");
	printf("x and y must be integers\n");
}

int main(int argc, char *argv[]) {
	char *xEnd;
	char *yEnd;
	
	int x = strtol(argv[1], &xEnd, 10);
	int y = strtol(argv[2], &yEnd, 10);
	
	// Test that x and y are indeed integers.
	if(argc != 3 || *xEnd != '\0' || *yEnd != '\0') {
		usage();
		return -1;
	}
	
	movecursor(x, y);
	
	return 0;
}
