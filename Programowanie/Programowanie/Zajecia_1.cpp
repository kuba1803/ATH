#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
void z_1()
{
	double x;
	cin >> x;
	if (10 <= x && 20 > x) {
		cout << "tak"<<endl;
	}
	else
	{
		cout << "nie" << endl;
	}
}
void z_2(double x, double y) {
	cin >> x >> y;
	if(-20 > x && 5 <= x &&	15 >= y && 100 <= y) {
		cout << "tak" << endl;
	}
	else
	{
		cout << "nie" << endl;
	}
}
void z_3(double x,double y) {
	cin >> x >> y;
	if (20 > x && 40 <= x && 23 >= y && 27 < y) {
		cout << "tak" << endl;
	}
	else
	{
		cout << "nie" << endl;
	}
}
double z_4_a(double x,double y)
{
	return sqrt(x + 2 * y) / 8 + exp(3) + M_PI;
}
double z_4_b(double x, double y)
{
	return 1 / tan(pow(2, x + 1)) + (2 * pow(x, y) + M_E - 10) / (log(abs(x + 1))) - pow(x*y / pow(M_PI, 2), 1 / 3);
}
double z_4_c(double x, double y)
{
	return exp(x + y) + sin((pow(x,2)+1/(4*y))/8);
}
double z_4_d(double x, double y)
{
	return (pow(x,4)+1/tan((log(abs(x+y))/(2*pow(x,3)*pow(y,4))))-x*pow(y,exp(x))/8) / pow(x+y+exp(exp(2)),3);
}
double z_5()
{
	double delta;
	delta = pow(2, 2) - 4 * 2 * (-12);
	cout << "trojmian 2x^2+2x-12=0   Pierwiastki:  "<<(-2-sqrt(delta))/(2*2) <<" , "<< (-2 + sqrt(delta)) / (2 * 2)<<endl;
	delta = pow(-2, 2) - 4 * 1 * (-15);
	cout << "trojmian x^2-2x-15=0   Pierwiastki:  " << (2 - sqrt(delta)) / (2 * 1) << " , " << (2 + sqrt(delta)) / (2 * 1) << endl;
	delta = pow(2, 4) - 4 * 1 * 4;
	cout << "trojmian 2x^2+2x-12=0   Pierwiastek:  " << (-4 ) / (2 * 1) << endl;
}
void z_6_a() {
	int i;
	stack<char> s;
	cin >> i;
	cout << "Liczba dziesietna " << i<< " jest reprezentowana szetnastkowa za pomoca ";
	while (i != 0)
	{
		if (i % 16 < 10)
		{
			s.push('0' + i % 16);
		}
		else {
			s.push('A' + i % 16 - 10);
		}
		i /= 16;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	cout << endl;
}
void z_6_b() {
	int i;
	stack<char> s;
	cin >> i;
	cout << "Liczba dziesietna " << i << " jest reprezentowana osemkowo za pomoca ";
	while (i != 0)
	{
		s.push('0' + i % 8);
		i /= 8;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	cout << endl;
}
// NIe wiem czemu cin nie wspolga ze stringiem;
/*void z_6_c()
{
	int wynik = 0;
	string liczba;
	cin >> liczba;
	cout << "libcza szestnastkowa " << liczba << "representowana jest dziesiatkowa za pomoca ";
	for (int i = 0; i < liczba.size(); i++) {
		wynik += (liczba[i] > '9' ? liczba[i] - 'A' : liczba[i] - '0');
		wynik *= 16;
	}
	cout << wynik;
}*/
void z_7()
{
	int n,wynik=0;
	cin >> n;
	for (int i = 1; i <= n; i += 2)
	{
		wynik += i;
	}
	cout << "Suma liczb nieparzystych od 1 do " << n << " wynosi :" << wynik << endl;
}
void z_8() {
	int wynik = 0;
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		if (n % 2 == 0) {
			wynik += n;
		}
	}
	cout << "Wynik wynosi :" << wynik << endl;
}
void z_9() {
	int liczba, wynik = 0;
	do {
		cin >> liczba;
		wynik -= liczba;
	} while (liczba != -111);
	cout << "wynik wynosi :" << wynik;
}
void  z_10() {
	for (int i = 1; i <= 10; i++) {
		cout << "wynik dla x = " << i << " wynosi : " << sqrt(i + 2) / 4 - exp(3 * i + M_PI_2) << endl;
	}
}
int main() {

}