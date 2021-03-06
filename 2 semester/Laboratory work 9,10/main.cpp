#include <iostream>
#include <fstream>
#include "inc/bmp.hpp"

int main()
{
	image::BMP bmp;

	bmp.Read("in.bmp");

	bmp.Rotate(acos( 1 / 4));

	bmp.Fix();
	/*
	int choose = 0;
	std::cout << "Choose filter to use: " << std::endl;
	std::cout << "1) User's filter " << std::endl;
	std::cout << "2) Blue filter " << std::endl;
	std::cout << "3) Green filter " << std::endl;
	std::cout << "4) Red filter" << std::endl;
	std::cout << "5) Rotate" << std::endl;

	std::cin >> choose;

	switch (choose)
	{
	case 1:
		bmp.Filter();

	case 2:
		bmp.BlueFilter();

	case 3:
		bmp.GreenFilter();

	case 4:
		bmp.RedFilter();

	case 5:
		bmp.Rotate(acos(-1) / 4);
	} */
	bmp.Write("out.bmp");

	return 0;
}