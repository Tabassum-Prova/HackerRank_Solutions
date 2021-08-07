#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	
    int vol;
    vol = b.height*b.length*b.width;
    return vol;
}

int is_lower_than_max_height(box b) {
	return b.height<41 ? 1:0;
}