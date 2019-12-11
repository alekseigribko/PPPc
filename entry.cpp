#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {

	cout << "Please enter your first name, second name and age:\n";
	string first_name = "???";
	string second_name = "???";
	string space = " ";
	double age = -1;
	cin >> first_name >> second_name >> age;
	int months = age * 12;


	cout << "Дрочи мой хуй себе в рот, " << first_name << space << second_name << space << "(age " << months << space << "months)\n";
	cout << "Please enter your reply:\n";
	string your_reply1;
	string a_reply;
	cin >> your_reply1;
	cin >> a_reply;
	cout << "Сам ты " << your_reply1 << space << a_reply << "\n";
	cout << "Я знаю ты любишь отсасывать, " << first_name << space << second_name << space << "(age " << months << space << "months)\n";
}
