#pragma once
#include <iostream>

class Point {
protected:
	int x;
	int y;
public:
	Point() : x{ 0 }, y{ 0 } {}
	int& GetX() { return x; }
	int& GetY() { return y; }
};

class MyWindow : public Point {
	int width;
	int height;
public:
	MyWindow(int w, int h): width{w}, height{h}{}
	int& GetWidth() { return width; }
	int& GetHeight() { return height; }

	void MoveX(int DX) { x += DX; }
	void MoveY(int DY) { y += DY; }

	void Show() {
		std::cout << "\n---------------\n"
			<< "X = " << x << std::endl
			<< "Y = " << y << std::endl
			<< "Width = " << width << std::endl
			<< "Height = " << height << std::endl
			<< "-----------------\n\n";
	}

};