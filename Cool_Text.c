#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
	char Text[] = "Hello World!";
    
	size_t len = strlen(Text);

    for(size_t i = 0; i < len; i++) {
		printf("%c", Text[i]);
		fflush(stdout);
		if(Text[i] != ' ') {
			usleep(500000);
		}
	}
}
