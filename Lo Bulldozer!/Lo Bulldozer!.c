// Created on Fri May 15 2015

int main()
{
	printf("Let's bulldoze!!!!\n");
	
	//Point to the right for start
	
	//Go straight
	mav(2, 1000); 
	mav(0, 1000); 
	msleep(2000); 
	ao(); 
	
	//Turn to the left
	mav(2, 500); 
	mav(0, 1000);	
	msleep(2700);
	ao();
	
	//Go straight for a while
	mav(2, 1000);	
	mav(0, 1000);
	msleep(8000);	
	ao();
	
	//Turn to the left
	mav(2, 500); 
	mav(0, 1000);	
	msleep(2700);
	ao();

	//Go straight for a while
	mav(2, 1000); 
	mav(0, 1000); 
	msleep(1500); 
	ao();
	
	//Turn to the left
	mav(2, 500); 
	mav(0, 1000);	
	msleep(2300);
	ao();
	
	//Drop servo
	set_servo_position(0,150);
	enable_servos();
	set_servo_position(0,1400);
	msleep(1000);
	
	//Go straight for a while
	mav(2, 1000);	
	mav(0, 1000);
	msleep(10000);	
	ao();
	
	//Pick up servo
	set_servo_position(0,150);
	msleep(1000);
	disable_servos();
	
	
	
	
	return 0;
}
