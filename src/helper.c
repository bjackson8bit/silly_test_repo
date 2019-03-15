#include "helper.h"

// Dereference pointer without checking if NULL
int helper(int* p) {
	int* c = 0;
    return *p + *c + 5;
}

int helper2(int* p) {
	int* c = 0;
	return *p + *c;
}