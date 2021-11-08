#include <iostream>
#include <cmath>
using namespace std;

struct Rectangle
{
	int X1;
	int Y1;

	int X2;
	int Y2;

	void createRectangle(int i)
	{
		cout << "Insert first X coordinate : ";
		cin >> X1;
		cout << "Insert first Y coordinate : ";
		cin >> Y1;

		cout << "Insert second X coordinate : ";
		cin >> X2;
		cout << "Insert second Y coordinate : ";
		cin >> Y2;
	}

	void printRectangle(int i)
	{
		cout << "(X1, Y1)" << endl;
		cout << "(" << X1 << ", " << Y1 << ")" << endl;

		cout << endl << "(X2, Y2)" << endl;
		cout << "(" << X2 << ", " << Y2 << ")" << endl;
	}

};

struct Circle
{
	int circleX;
	int circleY;
	int radius;

	void inputCirlce()
	{
		cout << "Enter circle X axis : ";
		cin >> circleX;

		cout << "Enter circle Y axis : ";
		cin >> circleY;

		cout << "Enter circle radius : ";
		cin >> radius;
	}

	bool intersect(Rectangle& rec)
	{
		int width = rec.X2 - rec.X1;
		int height = rec.Y2 - rec.Y1;

		int circleDistanceX = abs(circleX - rec.X1);
		int circleDistanceY = abs(circleY - rec.Y1);

		int corner = (circleDistanceX - width / 2) ^ 2 + (circleDistanceY - height / 2) ^ 2;

		if (circleDistanceX > (width / 2 + radius))
		{
			return false;
		}
		else if (circleDistanceY > (height / 2 + radius))
		{
			return false;
		}
		else if (circleDistanceX <= (width / 2))
		{
			return true;
		}
		else if (circleDistanceY <= (height / 2))
		{
			return true;
		}
		else (corner <= (radius ^ 2));
		{
			return true;
		}
	}
};

int main()
{
	Rectangle* rec;
	Circle cir;
	int numRectangle, i, temp = 0;

	cir.inputCirlce();

	cout << "Enter number of rectangles : ";
	cin >> numRectangle;

	rec = new Rectangle[numRectangle];

	for (i = 0; i < numRectangle; i++)
	{
		rec[i].createRectangle(i);
		rec[i].printRectangle(i);
	}

	for (int i = 0; i < numRectangle; i++)
	{
		if (cir.intersect(rec[i]))
		{
			temp++;
		}
	}

	cout << "Number of rectangles that collide : " << temp;
	return 0;
}
