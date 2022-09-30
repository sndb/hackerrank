#define MAX_HEIGHT 41

typedef struct box {
	int length, width, height;
} box;

int
get_volume(box b) {
	return b.length * b.width * b.height;
}

int
is_lower_than_max_height(box b) {
	return b.height < MAX_HEIGHT;
}
