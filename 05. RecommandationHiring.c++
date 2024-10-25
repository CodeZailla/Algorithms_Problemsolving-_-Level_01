#include <iostream>
using namespace std;

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
	bool hasRecommandation;
};

stInfo 	ReadInfo()
{
	stInfo Info;
	cout << "Please Enter Your Age: ";
	cin >> Info.Age;

	cout << "Do You Have a Driver License?(1 for Yes, 0 for No): ";
	cin >> Info.HasDrivingLicense;

	cout << "Do You Have a Recommandation? (1 for Yes, 0 for No): ";
	cin >> Info.hasRecommandation;

	return (Info);
}

bool	IsAccepted(stInfo Info)
{
	if (Info.hasRecommandation)// if this is true return true.
		return (true);
	else 
		return (Info.Age > 21 && Info.HasDrivingLicense);
}

void 	PrintInfo(bool Result)
{
	if (Result)/* we can also call the function IsAccepted here instead of using Result: Like this void PrintInfo(stInfo Info) and inside the function: if (IsAccepted(Info)) and this case we don't call the function IsAccepted in the main. But this way is more better because is maintainable and more flixalbe if we want to use the IsAccepted in other places in our program and better practice for large program.*/
		cout << "Hired\n";
	else 
		cout << "Rejected\n";
}

int main()
{
	PrintInfo(IsAccepted(ReadInfo()));

	return (0);
}
