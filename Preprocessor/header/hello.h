#include <stdio.h>
#ifndef HELLO_H_
#define HELLO_H_

void hello(int x) {
	for (int i = 0; i < x; i++) {
		printf("Hello world\n");
	}
}

#endif // HELLO_H_
