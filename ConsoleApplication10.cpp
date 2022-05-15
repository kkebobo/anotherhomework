#include <iostream>
using namespace std;

int main()
{

	//1
  double a;
  cout << "Enter the drob number ";
  cin >> a;

  double b = int(a * 100 + 0.5) / 100.0;

  cout << b << "\n";

 
  //2

	int student_with_hw;
	int student_without_hm;

	cout << "how many student with hw?";
	cin >> student_with_hw;

	cout << "how many student without hw?";
	cin >> student_without_hm;

	cout << student_without_hm * 100.0 / (student_with_hw + student_without_hm) << " % students without homework. \n";


	//3

	const int time = 86400;
	int sec_pass;

	cout << "Enter the time in seconds elapsed since the beginning of the day" << "\n";
	cin >> sec_pass;

	int hh = sec_pass % time / 3600;
	int mm = sec_pass / 60 % 60;
	int ss = sec_pass % 60;

	int hours_end, minute_end, seconds_end;
	int tmp = hh * 3600 + mm * 60 + ss;

	tmp = time - tmp;
	hours_end = tmp / 3600;
	minute_end = tmp / 60 - hours_end * 60;
	seconds_end = tmp - minute_end * 60 - hours_end * 3600;

	cout << "Now is: " << hh << " hh: " << mm << " mm: " << ss << " ss" << endl;
	cout << "before the midnight: " << hours_end << " hh: " << minute_end << " mm: " << seconds_end << " ss" << endl;


	//4

		double summ;
		double procent;
		int term;

		cout << "enter ur deposit(grn) ";
		cin >> summ;

		cout << "enter length of deposit in mounth";
		cin >> term;

		cout << "enter ur procents ";
		cin >> procent;

		procent = (procent / 100) / 12 * term;
		cout << procent;

		summ = summ * procent + summ;

		cout << "ur deposit in future going to be " << summ << "\n";

		//5

		double Radius = 6371;
		double Pi = 3.1415;

		cout << "The surface area of the earth is " << 4 * Pi * pow(Radius, 2) << " KM^2";


}
