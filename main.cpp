#include <iostream>
 using namespace std;


// Problem 1
//
// int main() {
//     int num;
//
//     cout << "Enter a number: ";
//     cin >> num;
//
//     if (num>0) {
//         cout << "The number is positive" << endl;
//     } else if (num==0) {cout << "The number is zero" <<endl;}
//     else {cout << "The number is negative" <<endl;}
// }


// Problem 2
//
// int main() {
//  int num;
//
//  cout << "Enter a number: ";
//  cin >> num;
//
//  if (num%2 == 0) {cout << "Even" << endl;}
//  else cout << "Odd" << endl;
// }


// Problem 3
//
// int main() {
//  int a, b;
//
//  cout << "Enter First Number: ";
//  cin >> a;
//
//  cout << "Enter Second Number: ";
//  cin >> b;
//
//  if (a>b) {
//   cout << "The largest number is " << a << endl;
//  } else if (a==b) {cout << "The numbers are equal" << endl;}
//  else {cout << "The largest number is " << b;}
// }


// Problem 4
//
// int main() {
//  int a, b, c;
//
//  cout << "Enter First Number: ";
//  cin >> a;
//
//  cout << "Enter Second Number: ";
//  cin >> b;
//
//  cout << "Enter Third Number: ";
//  cin >> c;
//
//  if (a>b and a>c) {
//   cout << "The largest number is " << a << endl;
//  }
//  else if (b>a and b>c) {cout << "The largest number is " << b;}
//  else {cout << "The largest number is " << c;}
// }


// Problem 5
//
// int main() {
//  int num;
//
//  cout << "Enter a year: ";
//  cin >> num;
//
//  if (num%4 == 0) {
//   if (num%100 != 0) {cout << "It's a leap year" << endl;}
//   else if (num%400 == 0) {cout << "It's a leap year" << endl;}
//   else {cout << "It's not a leap year" << endl;}
//  } else cout << "It's not a leap year" << endl;
// }


// Problem 6
//
// int main() {
//  int mark;
//
//  cout << "Enter your mark: ";
//  cin >> mark;
//
//  if (mark>50) {
//   cout << "Pass" << endl;
//  } else cout << "Fail" << endl;
// }


// Problem 7
//
// int main() {
//  int num;
//
//  cout << "Enter a number: ";
//  cin >> num;
//
//  if (num>0) {
//   cout << "Positive" << endl;
//  } else if (num<0) { cout << "Negative" << endl; }
//  else cout << "Zero" << endl;
// }


// Problem 8
//
// int main() {
//  int num, absolute;
//
//  cout << "Enter a number: ";
//  cin >> num;
//
//  absolute = (num<0) ? -num : num;
//
//  cout << absolute << endl;
// }


// Problem 10-11
// You said we don't have to do them.


// Problem 12
//
// int main() {
//  int mark;
//
//  cout<<"Enter your mark: ";
//  cin>>mark;
//
//  if (mark >= 90 and mark <= 100) {
//   cout<<"Your mark is A";
//  }
//  else if (mark >= 80 and mark <= 89) { cout<<"Your mark is B";}
//  else if (mark >= 70 and mark <= 79) { cout<<"Your mark is C";}
//  else if (mark >= 60 and mark <= 69) { cout<<"Your mark is D";}
//  else if (mark < 60) { cout<<"Your mark is F";}
//  else { cout<<"Enter a valid mark (0-100)";}
// }


// Problem 13-15
// You said we don't have to do them.


// Problem 16
//
// int main() {
//  int number;
//
//  cout << "Enter a number: ";
//  cin >> number;
//
//  if (number % 3 == 0 and number % 5 == 0) {
//   cout << "Divisible by both" << endl;
//  } else cout << "Not divisible by both" << endl;
// }


// Problem 17-19
// You said we don't have to do them.


// Problem 20
//
int main() {
 int a,b, num1;

 cout<<"Enter two numbers: ";
 cin>>a>>b;

 if (a>b) {
  if (a%b != 0) {
  num1 = a%b;
  cout<<"The remainder is "<<num1<<endl;}
  else cout<<"The remainder is zero"<<endl;
 } else cout<<"Not divisible "<<endl;
}