#pragma once
#include <iostream>
using namespace std;
class Roga {
protected:
	char color[25];
	int ves;
public:
	Roga() {
		strcpy_s(color, "���������-�����");
		ves = 20;
	}
	Roga(const char* c, int v) {
		strcpy_s(color, c);
		ves = v;
	}
};
class Kopyta {
protected:
	char forma[25];
	int razmer;
public:
	Kopyta() {
		strcpy_s(forma, "���������");
		razmer = 20;
	}
	Kopyta(const char* c, int v) {
		strcpy_s(forma, c);
		razmer = v;
	}
};

class Los : public Roga, public Kopyta {
	char name[25];
public:
	Los(const char* c) {
		strcpy_s(name, c);
	}
	void Display() {
		cout << "��� ���� - " << name << endl
			<< "����� ����� - " << forma << endl
			<< "���� ����� - " << color << endl
			<< "��� ����� - " << ves << endl
			<< "������ ����� - " << razmer << endl;
	}
};
