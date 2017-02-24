// Disc Game.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "class.h"
#include <math.h> 

;int main()
{
	int maxX, maxY;
	
	cout << "Enter the Maximum value of X in XY Plane";
	cin >> maxX;

	cout << "Enter the Maximum value of Y in XY Plane";
	cin >> maxY;

	Disc discs[2];
	for (int disc = 0; disc < 2; disc++)
	{
		int rad;
		cout << "Enter the Radius of " << disc + 1 << " Disc: ";
		cin >> rad;
		discs[disc].SetRadius(rad);
	}

	for (int i = 0; i < 2; i++)
	{
		discs[i].Throw(maxX, maxY);
	}

	int xCoordinateMath = (discs[1].GetXCoordinate() - discs[0].GetXCoordinate()) * (discs[1].GetXCoordinate() - discs[0].GetXCoordinate());

	int yCoordinateMath = (discs[1].GetYCoordinate() - discs[0].GetYCoordinate()) * (discs[1].GetYCoordinate() - discs[0].GetYCoordinate());

	int addition = xCoordinateMath + yCoordinateMath;

	double sqrtofAddition = sqrt(addition);

	if (sqrtofAddition < (discs[0].GetRadius() + discs[1].GetRadius()))
	{
		cout << "YOU WON Congrats!!" << "\n";
	}
	else {
		cout << "Try Again!!" << "\n";
	}

	for (int i = 0; i < 2; i++)
	{
		int rad = discs[i].GetRadius();
		int xcoo = discs[i].GetXCoordinate();
		int ycoo = discs[i].GetYCoordinate();
		cout << "The Radius of Disc " << i + 1 << " is " << rad << "\n";
		cout << "And there Center is " << xcoo << "," << ycoo << "\n";
	}

    return 0;
}

