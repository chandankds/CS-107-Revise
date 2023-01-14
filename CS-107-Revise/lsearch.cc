#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int int_lsearch(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {

	return 0;
}