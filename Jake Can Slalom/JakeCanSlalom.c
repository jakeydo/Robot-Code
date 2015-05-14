// Created on Wed May 13 2015

int main()
{
	printf("Let's slalom!\n");
	
	//If you start the robot (wobot) right behind the 3 circle, one square back from the 
	//black line, it should slalom 2/6/9 and then come home.
	
	//go straight
	mav(0,1000);
	mav(2,980);
	msleep(1400);
	
	//slide to the left
	mav(0,1000);
	mav(2,490);
	msleep(2650);
	
	//go straight a little bit
	mav(0,1000);
	mav(2,980);
	msleep(750);
	
	//slide to the right
	mav(0,000);
	mav(2,1000);
	msleep(1750);
	
	//go right straightish
	mav(0,600);
	mav(2,1000);
	msleep(2850);
	
	//go left staightish
	mav(0,1000);
	mav(2,500);
	msleep(7750);
	
	//go straight home
	mav(0,1000);
	mav(2,980);
	msleep(7000);
	
	ao();
	
	return 0;
}
