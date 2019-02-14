//a structure can contain other structures.
#include <stdio.h>
struct coord {
	int x, y;
};

struct rectangle {
	struct coord topleft, bottomrt;
	int base, height, area;
} box1;

int main( void ) {
	//user input this:
	printf("top left x: ");
	scanf("%d", &box1.topleft.x);
	printf("top left y: ");
	scanf("%d", &box1.topleft.y);
	printf("bottom right x: ");
	scanf("%d", &box1.bottomrt.x);
	printf("bottom right y: ");
	scanf("%d", &box1.bottomrt.y);

	//calculate b and h for area
	box1.base = box1.bottomrt.x - box1.topleft.x;
	box1.height = box1.topleft.y - box1.bottomrt.y;
	//area
	box1.area = box1.base * box1.height;
	printf("The area is %d square units.\n", box1.area);
	return 0;
}
