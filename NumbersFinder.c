#include <stdio.h>
#include <sys/types.h>

void EvenFinder(int hm) {
	for(long long i = 1; i < hm || hm == 0; i++) {
		printf("|%lld| ", i * 2);
	}
}

void OddFinder(int hm) {
	for(long long i = 0; i <= hm || hm == 0; i++) {
		printf("|%lld| ", i * 2 + 1);
	}
}

int main() {
	int how_much;
	int mode;

	printf("How much: ");
	scanf("%d", &how_much);

	printf("Mode: ");
	scanf("%d", &mode);

	//debug
	mode = 2;
	how_much = 0;

	(mode == 1) ? EvenFinder(how_much) :
	(mode == 2) ? OddFinder(how_much) : 0;

	return 0;
}
