#include<iostream>
#include<cmath>
using namespace std;
void cal1();
void cal2();
void cal3();
void cal4();
void cal5();
void cal6();
void cal7();
void cal8();
void cal9();
void cal10();
void cal11();
void cal12();
int main(){
	cout << "Choice what you want (choice number )" << endl;
	cout << "1_Addition" << endl << "2_Subtraction" << endl << "3_Multiplication" << endl;
	cout << "4_Division" << endl << "5_Factorial of a number" << endl << "6_Absolute value of a number" << endl;
	cout << "7_The largest integer" << endl << "8_The smallest integer" << endl << "9_Power" << endl<<"10_Roots"<<endl;
	cout << "11_Trigonometric Functions" << endl << "12_Conversions" << endl << "13_Exist" << endl << endl << "Enter your choice  :" << endl;
	bool t = true;
	int i;
	while (t) {
		cin >> i;
		if (i >= 1 && i <= 12) {
			switch (i) {
			case 1:
				cal1();
				break;
			case 2:
				cal2();
				break;
			case 3:
				cal3();
				break;
			case 4:
				cal4();
				break;
			case 5:
				break;
				cal5();
				break;
			case 6:
				cal6();
				break;
			case 7:
				cal7();
				break;
			case 8:
				cal8();
				break;
			case 9:
				cal9();
				break;
			case 10:
				cal10();
				break;
			case 11:
				cal11();
				break;
			case 12:
				cal12();
				break;
			default:
				cout <<endl;
			}
			cout << "choice again if you want " << endl;
		}
		else if (i == 13)
			break;
		else
			cout << "Rejected Choice , Choice again:" << endl;
	}
	return 0;
}


void cal1() {
	int a;
	float b, c = 0;
	cout << "Enter the number of numbers that you want to add to each other: " << endl;
	cin >> a;
	if (a < 0)
		cout << "rejected value.";
	else {
		cout << "Enter the numbers that you want to add to each other:" << endl;
		while (a) {
			cin >> b;
			c += b;
			cout << "The last calculation value is" << c << endl;
			a--;
		}
		cout << "The Final value is " << c << endl;
	}
}


void cal2() {
	int a;
	float b, c = 0;
	cout << "Enter the number of numbers  that you want to subtract from each other: " << endl;
	cin >> a;
	if (a < 0)
		cout << "rejected value.";
	else {
		cout << "Enter the numbers that you want to subtract from each other:" << endl;
		cin >> b;
		c += b;
		while (--a) {
			cin >> b;
			c -= b;
			cout << "The last calculation value is" << c << endl;
		}
		cout << "The Final value is " << c << endl;
	}
}


void cal3() {
	int a;
	float b, c = 1;
	cout << "Enter the number of numbers  that you want to multiply each other :" << endl;
	cin >> a;
	if (a < 0)
		cout << "rejected value.";
	else {
		cout << "Enter the numbers that you want to multiply each other:" << endl;
		while (a) {
			cin >> b;
			c *= b;
			cout << "The last calculation value is " << c << endl;
			a--;
		}
		cout << "The Final value is " << c << endl;
	}
}


void cal4() {
	int a;
	float b, c = 1;
	cout << "Enter the number of numbers  that you want  to divide it: " << endl;
	cin >> a;
	if (a < 0)
		cout << "rejected value.";
	else {
		cout << "Enter the numbers that you want to divide it:" << endl;
		cin >> b;
		c = b / c;
		while (--a) {
			cin >> b;
			c /= b;
			cout << "The last calculation value is " << c << endl;

		}
		cout << "The Final value is " << c << endl;
	}
}


void cal5() {
	int a,b=0;
	cout << "Enter any positive integer:";
		cin >> a;
		if (a < 0)
			cout << "rejected value.";
	else {
		while (a) {
			b *= a;
			a--;
		}
		cout << "The Final value is " << b << endl;
	}

}


void cal6() {
	float a;
	cout << "Enter any number:" << endl;
	cin >> a;
	cout << fabs(a)<<endl;
}


void cal7() {
	int a,b, max=0;
	cout << "Enter tne number of numbers that you want to find the largest from them:"<<endl;
	cin >> a;
	if (a < 0)
		cout << "rejected value.";
	else {
		cout << "Enter the numbers that you want to find the largest from them:" << endl;
		while (a) {
			cin >> b;
			if (b > max)
				max = b;
			a--;
		}
		cout << "THe largest value is:" << max << endl;
	}
}


void cal8() {
	int a, b, min;
	cout << "Enter tne number of numbers that you want to find the smallest from them:" << endl;
	cin >> a;
	if (a < 0)
		cout << "rejected value.";
	else {
		cout << "Enter the numbers that you want to find the smallest from them:" << endl;
		cin >> b;
		min = b;
		while (--a) {
			cin >> b;
			if (b < min)
				min = b;
		
		}
		cout << "THe smallest value is:" << min << endl;
	}
}


void cal9() {
	float a, b,c=1;
	cout << "Enter the base:" << endl;
	cin >> a;
	cout << "Enter the power :" << endl;
	cin >> b;
	while (b) {
		c *= a;
		b--;
	}
	cout << "The value is :" << c << endl;
}


void cal10() {
	float a, b, c;
	cout << "Enter the base:" << endl;
	cin >> a;
	cout << "Enter the root:" << endl;
	cin >> b;
	if (b >= 1 || b <= -1) {
		c = 1 / b;
		cout << "The root is :" << pow(a, c) << endl;
	}
	else
		cout << "The root is : " << pow(a, b) << endl;
}


void cal11() {
	int a;
	float b;
	cout << "choice a number of these function:" << endl << "1_sine" << endl << "2_cosine" << endl << "3_tangent" << endl;
	cin >> a;
	if (a == 1) {
		cout << "Enter the angle (radian unit)" << endl;
		cin >> b;
		cout << "sin(" << b << ")=" << sin(b) << endl;
	}
	else if (a == 2) {
		cout << "Enter the angle (radian unit)" << endl;
		cin >> b;
		cout << "cos(" << b << ")=" << cos(b) << endl;
	}
	else if (a == 3) {
		cout << "Enter the angle (radian unit)" << endl;
		cin >> b;
		cout << "tan(" << b << ")=" << tan(b) << endl;
	}
	else
		cout << "Rejected Choice." << endl;

}


void cal12() {
	int a;
	float b;
	cout << " Choice the type of the angle unit ypu will enter it: " << endl << "1_radian" << endl << "2_degrees" << endl;
	cin >> a;
	if (a == 1) {
		cout << "Enter the angle value:" << endl;
		cin >> b;
		cout << " the degree value of this angle is : " << b * 57.2727273 << endl;

	}
	else if (a == 2) {
		cout << "Enter the angle value:" << endl;
		cin >> b;
		cout << " the radian value of this angle is : " << b * 0.01746032 << endl;

	}
	else
		cout << " Rejected choice." << endl;
}