#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


	int n = rand() & 1000;
	n = rand() & 1000;
	int i = 0;
	int score = 0;

	while (i != n) {

		printf("\n Entrez un nombre : ");
		scanf_s("%d", &i);

		if (i < n) {
			printf("\nTrop petit");
		}

		if (i > n) {
			printf("\nTrop grand");
		}

		score += 1;

	}

	printf("\nvotre score est de %d", score);
}