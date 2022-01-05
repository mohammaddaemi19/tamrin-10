#include <iostream>

using namespace std;

class clo
{
	int second;
	int min;
	int hour;
public:
	void time()
	{
		cout << "please enter second:";
		cin >> second;
		cout << "please enter min:";
		cin >> min;
		cout << "please enter hour:";
		cin >> hour;
	}
	void show()
	{
		cout << hour << ":" << min << ":" << second << endl;
	}
	void sumtimes(clo b);
	void change();
	void changesecond();
};
void clo::change()
{
	int h = hour * 3600;
	int m = min * 60;
	cout << "second:" << m + h + second << endl;
}
void clo::sumtimes(clo b)
{
	int s = second + b.second;
	int m = min + b.min;
	int h = hour + b.hour;
	if (s > 60)
	{
		s = s % 60;
		m=m + 1;
	}
	if (m > 60)
	{
		m = m % 60;
		h=h + 1;
	}
	cout << "sum:" << h << ":" << m << ":" << s << endl;
}
void clo::changesecond()
{
	int s, m, h;
	cout << "please enter second:";
	cin >> s;
	if (s < 60)
	{
		cout << "00" << ":" << "00" << ":" << s;
	}
	if (3600 > s && s > 60)
	{
		m = s / 60;
		s = s % 60;
		cout << "00" << ":" << m << ":" << s;
	}
	if (s > 3600)
	{
		h = s / 3600;
		m = (s % 3600) / 60;
		s = (s % 3600) % 60;
		if (h < 10)
			cout << "0" << h << ":" << m << ":" << s;
		else
			cout << h << ":" << m << ":" << s;
	}
	
	
}
int main()
{
	clo a, b, c;
	cout << "time 1:" << endl;
	a.time();
	a.show();
	cout << "time 2:" << endl;
	b.time();
	b.show();
	a.sumtimes(b);
	a.change();
	c.changesecond();

}