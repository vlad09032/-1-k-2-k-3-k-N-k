/*
����� �������������� ����� ��� ���������: 1k + 2k + 3k + � + Nk. N � ������� k ������
������������.

��������� ������ ��������� ������� ����:

CppStudio.com
������� N: 5
������� ������� �: 2
�����: 55
*/
#include<iostream>
int vvodN()
{
	int n;
	std::cout << "������� N: ";
	std::cin >> n;
	return n;
}
int vvodK()
{
	int k;
	std::cout << "������� ������� �: ";
	std::cin >> k;
	return k;
}
void raschetAndVivod(int n, int k)
{
	double sum{ 0 };
	for (int i{ 1 }; i <= n; ++i)
		sum += pow(i, k);
	std::cout << "�����: "<<sum;
}

int main() 
{
	setlocale(LC_ALL, "");
	int n{ 0 }, k{0};
	do
	{
		n = vvodN();
	} while (n < 1);
	do
	{
		k = vvodK();
	} while (k < 1);

	raschetAndVivod(n,k);
}