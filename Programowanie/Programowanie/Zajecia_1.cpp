#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stack>
#include <string>
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
void z_6_c()
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
}
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
void z_11_a(){
	double x, y;
	cin >> x >> y;
	double p1=0, p2=1;
	for (int i = 1; i <= 10; i++) {
		p1 += sin(x) / 3;
	}
	for (int i = 3; i >= -2; i--) {
		p2 *= sqrt(x + 2 * y);
	}
	cout << p1 + p2 + exp(3 * x + M_PI_2) << endl;;
}
void z_11_b() {
	double x, y;
	cin >> x >> y;
	double p1 = 0, p2 = 1;
	for (int i = -1; i >= -4; i--) {
		p1 += 1/tan(i*x);
	}
	for (int i = 10; i >= 3; i--) {
		p2 *= exp(abs(x));
	}
	cout << p1 + p2 << endl;;
}
void z_11_c() {
	double x, y;
	cin >> x >> y;
	double p1 = 1, p2 = 1,p3=0;
	for (int i = 3; i >= -2; i--) {
		p1 += sqrt((x+y)/(log(abs(i+10))));
	}
	for (int i = 1; i >= -4; i--) {
		p2 *= sqrt(x/2+pow(y,x));
	}
	for (int i = 1; i >= -4; i--) {
		p3 += tan(i);
	}
	cout << p1 - p2 + p3 - x << endl;;
}
void z_11_a() {
	double x, y;
	cin >> x >> y;
	double wyn_zew = 1, wyn_wew = 0;
	for (int i = -2; i <= 3; i++){
		wyn_wew = 0;
		for (int j = 1; j <= 5; j++) {
			wyn_wew += tan(2 * pow(x, i + j) + j*y) + (log(abs(pow(2, j)*x + 1))) / (2 * y + 10 * i) + pow(x*y*pow(j, i), 1 / 3.);
		}
		wyn_zew *= wyn_wew;
	}
	cout << wyn_zew;
}
void z_11_b() {
	double x, y;
	cin >> x >> y;
	double wyn_zew = 0, wyn_wew = 1;
	for (int i = -3; i >= -5; i--) {
		wyn_wew = 1;
		for (int j = 3; j >= -1; j--) {
			wyn_wew *= log2(x+i*j);
		}
		wyn_zew += wyn_wew;
	}
	cout << wyn_zew+log(3*y)+pow(x+y*exp(exp(x+2)+10),1/3.);
}
void z_11_c() {
	double x, y;
	cin >> x >> y;
	double wyn_zew = 0, wyn_wew = 1;
	for (int i = -3; i >= -5; i--) {
		wyn_wew = 1;
		for (int j = 3; j >= -1; j--) {
			double wyn_temp = 0;
			for (int k = 1; k <= 10; k++)
			{
				wyn_temp += (k*sin(x)) / 3;
			}
			wyn_wew *= log(i*j)-sqrt(M_PI)+wyn_temp;
		}
		wyn_zew += wyn_wew;
	}
	cout << wyn_zew;
}
int main() {

}
