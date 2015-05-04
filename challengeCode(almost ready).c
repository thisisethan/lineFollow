#include <time.h>
//line follow
int main()
{
	double sec = 0;
	clock_t start = clock(), diff;
	while (sec <= 4)
	{
		if (analog(6) < 900)
		{
			motor(0, 20);
			motor(3, 100);
			
		}
		
		else	
		{
				motor(0, 100);
				motor(3, 20);
		}
		diff = clock() - start;
		sec = diff * 10 / CLOCKS_PER_SEC;
	printf("seconds_running: %li\n", sec);
		}
		//turn left
			motor(0, 100);
			motor(3, -100);
			msleep(1000);
	
	//go forward until sense black
	while (analog(6) < 900)
	{
		motor(0, 100);
		motor(3, 100);
	}
	
	ao();
	
	//turn right
	motor(0, 100);
	motor(3, -100);
	msleep(2000);
	
	//go forward
	motor(0, 100);
	motor(3, 100);
	msleep(3000);

	//go backwards
	while (digital(8) != 1){}
	motor(0, -100);
	motor(3, -100);
	msleep(4000);
	
	ao();
	
	return 0;
}
