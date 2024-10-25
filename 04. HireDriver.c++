#include <iostream>
using namespace std;

struct stInfo
{
	int Age;
	bool HasDriverLicense;
};

stInfo	ReadInfo()
{
	stInfo Info;
	cout << "Please Enter Your Age: ";
	cin >> Info.Age;

	cout << "Do You Have a Driver Lincense? (1 for Yes, 0 for No): ";
	cin >> Info.HasDriverLicense;

	return (Info);
}

bool 	IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDriverLicense);/*this return statement it works like an if statement we don't need to write an if statement we can directly use the return as an if statement and return statement*/
}

void 	PrintInfo(bool Result)
{
	if (Result)
		cout << "Hired\n";
	else 
		cout << "Rejected\n";
}

int main()
{
	PrintInfo(IsAccepted(ReadInfo()));

	return (0);
}

