#pragma once
#include<iostream>
#include <string>
#include<algorithm>
#include<iomanip>
using namespace std;
struct Student
{
public:
	int id{}; 	string fio;  string  gruppa;

private:
	int age{}; 	char pol{}; int ves{}; double rost{}; 	double stipendia{};

public:
	void Age(int Age)
	{
		age = Age;

	}
	void Gender(int Gender)
	{
		pol = Gender;

	}
	void Weight(int Weight)
	{
		ves = Weight;

	}
	void Height(double Height)
	{
		rost = Height;

	}
	void Stipendia(int Step)
	{
		stipendia = Step;

	}
	/*char Pol()
	{
		if (pol == 'Ì' || pol == 'Æ')
		{
			return pol;
		}
		else
		{
			return 0;
		}
	};
	int Age()
	{
		if (2024 - god >= 15 && 2024 - god <= 60)
		{
			return 2024 - god;
		}
		else
		{
			return 0;
		}
	};*/
	void Show()
	{
		cout << left << setw(5) << id << left << setw(20) << fio << left << setw(7) << age << left << setw(4) << pol << left << setw(4) << ves << left << setw(8) << rost << left << setw(8) << stipendia << left << gruppa << endl;
	}
}st;
