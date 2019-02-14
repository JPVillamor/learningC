#include <stdio.h>
void omni() {
	unsigned char ascii;
	for (int i = 0; i < 256; i++) {
		ascii = i;
		printf("%c\n", ascii);
	}
}
int main(void) {
	omni();
}
