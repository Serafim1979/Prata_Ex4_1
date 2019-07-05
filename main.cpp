#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	char select, grade;
	string fname, lname;
	int age;

	do
	{
		cout << "What is your first name?" << endl;
		getline(cin, fname);

		cout << "What is your last name?" << endl;
		getline(cin, lname);

		cout << "What letter grade do you deserve?" << endl;
		cin >> grade;

		cout << "What is your age?" << endl;
		cin >> age;

		cout << "Name: " << lname << ", " << fname << endl;
		cout << "Grade: " << char(grade + 1) << endl;
		cout << "Age: " << age << endl;

		cout << "Continue(y/n)?" << endl;
		cin >> select;

	} while (select != 'n');

	cout << "Good bye!" << endl;

	system("pause");
	return 0;
}