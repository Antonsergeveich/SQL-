#include<iostream>
using namespace std;

//���������� ����:
//1)������� �� 4 ��� �������
//2)������� �� 4 �� 100 �� 400 ��� �������
//�� ���������� ����: ������� �� 4 � �� 100 ��� �������
//2016, 2000 - yes
//1900, 2017 - no

void main()
{
	setlocale(LC_ALL, "");
	int year;
	cout << "������� ���: ", cin >> year;
	if (year % 4 == 0 && year % 100 == 0 && year && 400 == 0)
	{
		cout << year << "\t��� �����������" << endl;
	}
	else if (year % 4 == 0)
	{
		cout << year << "\t��� �����������" << endl;
	}
	else if (year % 4 == 0 && year % 100 == 0)
	{
		cout << year << "\t��� �� �����������" << endl;
	}
	else
	{
		cout << year << "\t��� �� �����������" << endl;
	}

}