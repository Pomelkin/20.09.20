#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double h, m, s;
	setlocale(0, "rus");
	cout << "Введите данный о текущем времени:\n";
	cout << "h -> "; cin >> h;
	cout << "\nm -> "; cin >> m;
	cout << "\ns -> "; cin >> s;
	if ((0 <= h <= 11) && (0 <= m <= 59) && (0 <= s <= 59))
	{
		s = s * (0.5 / 60.0);
		s = round(s * 100) / 100;
		h *= 30;
		m *= 0.5;
		cout << "\nf = " << h + m + s << " градусов";
	}
	else
	{
		cout << "\nДанные введены неверно";
	}
}
