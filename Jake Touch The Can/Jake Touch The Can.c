// Created on Wed April 22 2015

int main()
{
	//Turn on both motors
	motor(0,95);
	motor(2,100);
	
	//Wait some seconds
	msleep(3600);
	
	//Turn everything off
	ao();
	
	//Wait one second
	msleep(1000);
	
	//Back up
	motor(0,-100);
	motor(2,-95);
	
	//Wait some seconds
	msleep(3800);
	
	//Turn everything off
	ao();
	
	return 0;
}
