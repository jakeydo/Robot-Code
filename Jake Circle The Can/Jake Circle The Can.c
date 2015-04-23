// Created on Wed April 22 2015

int main()
{
	//File to circle the can and come back
	
	//Go
	motor(0,95);
	motor(2,100);
	
	//Wait some seconds
	msleep(2500);
	
	//Turn
	motor(0,100);
	motor(2,0);
	
	//Wait some seconds
	msleep(800);
	
	//Turn
	motor(0,30);
	motor(2,100);
	
	//Wait
	msleep(7000);
	
	//Straighten up and go home
	motor(0,95);
	motor(2,100);
	
	//Wait
	msleep(4500);
	
	//Turn off
	ao();
	
	return 0;
}
