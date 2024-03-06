#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include "Header.h"
#include <fstream>
#define M 'М'
#define W 'Ж'
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	Student I;
	I.id = 1;
	I.fio = "Майкл Джордан";
	I.Gender(M);
	I.Age(17);
	I.Weight(47);
	I.Height(1.67);
	I.Stipendia(799);
	I.gruppa = "5ПКС-899";

	Student K;
	K.id = 2;
	K.fio = "Стефен Курри";
	K.Gender(M);
	K.Age(17);
	K.Weight(62);
	K.Height(1.78);
	K.Stipendia(11199);
	K.gruppa = "89ИСИП-79";

	Student st[100] = { I, K };
	for (int i = 0; i < 2; i++)
	{
		st[i].Show();

	}

	/*Student Ivan{1, "Рогулин Иван", 17, 'М', 65, 1.77, 900, "2ОИБАС1122"};
	Student Fedor{ 2, "Петров Фёдор", 17, 'М', 69, 1.68, 1200, "2ОИБАС1222" };
	Student Anna{ 3, "Иванова Анна", 18, 'Ж',  58, 1.59, 900, "2ОИБАС1022" };
	Student Valeriya{ 4, "Смирнова Валерия", 16, 'Ж', 59, 1.61, 1200, "2ОИБАС922" };
	Student Radion{ 5, "Радионов Радион", 17, 'М',  66, 1.71, 0, "2ОИБАС1122" };
	Student Aleksey{ 6, "Николаев Алексей", 18, 'М', 68, 1.72, 1200, "2ОИБАС1222" };
	Student Nikolay{ 7, "Колюх Николай", 17, 'М', 71, 1.66, 900, "2ОИБАС1122" };
	Student Timur{ 8, "Гайдар Тимур", 16, 'М', 70, 1.65, 1200, "2ОИБАС1022" };
	Student Asya{ 9, "Белова Ася", 18, 'Ж', 52, 1.78, 0, "2ОИБАС1322" };
	Student Sonya{ 10, "Громова Соня", 17, 'Ж', 53, 1.75, 900, "2ОИБАС922" };*/
}