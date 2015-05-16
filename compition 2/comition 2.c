// Created on Sat May 16 2015

int main()
{
	mav(0, 1000);
	mav(2, 1000);
	msleep(4000);
	ao();
	mav(0, 1000);
	mav(2, 500);
	msleep(5000);
	ao();
	mav(0, 1000);
	mav(2, 1000);
	msleep(3000);
	ao();
	
	return 0;
}
