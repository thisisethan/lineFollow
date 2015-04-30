#include <time.h>

int main()
{
	long sec = 0;
	clock_t start = clock(), diff;
	msleep(1200);
	diff = clock() - start;
	sec = diff * 10 / CLOCKS_PER_SEC;
	printf("seconds_running: %li\n", sec);
	//Should say something like "seconds_running: 1200"
	
	return 0;
}
