#include <iostream>
using namespace std;

enum 	enNumberType{Odd = 1, Even = 2};

int		ReadNumber()
{
	int Num;
	do
	{
		cout << "Please Enter a Positive Number: ";
		cin >> Num;
	} while (Num < 0);

	return (Num);
}

enNumberType	CheckNumberType(int Num)
{
	int Result = Num % 2;

	if (Result == 0)
		return (enNumberType::Even);
	else
		return (enNumberType::Odd);
}

void	PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "The Numer is Even" << endl;
	else
		cout << "The Number is Odd" << endl;
}

int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));

	return (0);
}
