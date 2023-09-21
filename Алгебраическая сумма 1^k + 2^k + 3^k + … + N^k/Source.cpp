/*
Ќайти алгебраическую сумму дл€ выражени€: 1k + 2k + 3k + Е + Nk. N и степень k вводит
пользователь.

–езультат работы программы показан ниже:

CppStudio.com
¬ведите N: 5
¬ведите степень к: 2
—умма: 55
*/
#include<iostream>
int vvodN()
{
	int n;
	std::cout << "¬ведите N: ";
	std::cin >> n;
	return n;
}
int vvodK()
{
	int k;
	std::cout << "¬ведите степень к: ";
	std::cin >> k;
	return k;
}
void raschetAndVivod(int n, int k)
{
	double sum{ 0 };
	for (int i{ 1 }; i <= n; ++i)
		sum += pow(i, k);
	std::cout << "—умма: "<<sum;
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