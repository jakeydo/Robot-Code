// Created on Sat May 16 2015

int main()
{
	mav(0, 1000);
	mav(2, 1000);
	msleep(6000);
	ao();
	mav(0, -1000);
	mav(2, -1000);
	msleep(6000);
	ao();
	return 0;
}
