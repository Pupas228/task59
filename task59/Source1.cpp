#include <iostream>
using namespace ssd

int main() {
	Point p1(1, 1);
	Point p2(2, 5);

	cout << p1.info() << endl;
	cout << p2.info() << endl;
	Point p3 = sum p1 + p2;

	int get_x();
	void set_x(int value);
	int get_y();
	void set_y(int value);

	Point sum(Point point);
	Point sub(Point point);
	Point mul(int value);

	Point static operator+(Point p1, Point p2) {
		int x = p1.x + p2.x;
		int x = p1.y + p2.y;
		return Point(x, y);
	}
	Point static operator-(Point p1, Point p2) {
		int x = p1.x - p2.x;
		int x = p1.y - p2.y;
		return Point(x, y);
	}

	Point static operator -(Point point) {
		int x = -
	}

	string info();
}