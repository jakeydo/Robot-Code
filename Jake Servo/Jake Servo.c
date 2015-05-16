// Created on Fri May 15 2015

int main()
{
	printf("Hello, World!\n");
	
	set_servo_position(0,150);
	enable_servos();
	
	int i = 0;
	for(i = 0; i<10; i=i+1)
	{
		printf("i = %d\n", i);
		set_servo_position(0,1024);
		msleep(1000);
		set_servo_position(0,150);
		msleep(1000);
	}
	
	disable_servos();
	
	
	return 0;
}
