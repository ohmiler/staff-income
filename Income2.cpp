#include <iostream>
using namespace std;

int main() {
	int Id,Salary,Sales,comm,income;
	char name[30];
	
	cout << "Enter your id :";
	cin >> Id;
	cout << "Enter your name :";
	cin >> name;
	cout << "Enter your salary :";
	cin >> Salary;
	cout << "Enter your sales :";
	cin >> Sales;
	
	if (Sales > 100000) {
		cout << "You have 5 percent of commission. \n";
		comm = Sales * 0.5;
		cout << "Your commisson is : " << comm << endl;
	} else if (Sales > 50000){
		cout << "You have 3 percent of commission. \n";
		comm = Sales * 0.3;
		cout << "Your commisson is : " << comm << endl;
	} else {
		cout << "You dont get the commission. \n" << endl;
	}
		
	income = comm + Salary;
	cout << "This is your income : " << income << endl; 
	
	
	cin.get();
	system("pause");
	return 0;
	
}
