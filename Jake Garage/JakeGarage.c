// Created on Wed May 13 2015

int main()
{
	printf("Hello, World!\n");
	
	//If you start WoBot directly behind circle 3, with the front aligned with one square behind
	//the big black line, with it pointing ever-so-slightly to the left, if should get really
	//close to parking in the yellow garage
	mav(0,975);
	mav(2,1000);	
	msleep(9000);
	
	mav(0,975);
	mav(2,100);
	msleep(2600);
	
	mav(0,975);
	mav(2,900);
	msleep(2850);
	
	mav(0,975);
	mav(2,1000);
	msleep(1600);
	
	ao();
	
	
	
	
	
	return 0;
}
