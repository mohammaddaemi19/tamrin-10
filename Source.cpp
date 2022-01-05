#include <iostream>
using namespace std;

class kasr
{
	int surat, makhraj;
public:
	kasr(int s, int m)
	{
		cout << "enter surat:";
		cin >> s;
		surat = s;
		cout << "enter makhraj:";
		cin >> m;
		makhraj = m;
	}
	kasr(bool a, int s, int m)
	{
		cout << "enter alamat:";
		cin >> a;
		cout << "enter surat:";
		cin >> s;
		surat = s;
		cout << "enter makhraj:";
		cin >> m;
		makhraj = m;
	}
	void show(string name)
	{
		if (makhraj == 1)
			cout << name << ":" << surat << endl;
		else if (makhraj != 0)
			cout << name << ":" << surat << "/" << makhraj << endl;
		else
			cout << "eror" << endl;
	};
	void sum(kasr kasr_diagar);
	void subtract(kasr kasr_digar);
	void divide(kasr kasr_digar);
	void multi(kasr kasr_digar);
};
void kasr::sum(kasr kasr_diagar)
{
	int s = surat * kasr_diagar.makhraj + kasr_diagar.surat * makhraj;
	int m = this->makhraj * kasr_diagar.makhraj;
	cout << "sum:" << s << "/" << m<<endl;
}
void kasr::subtract(kasr kasr_digar)
{
	int s = surat * kasr_digar.makhraj - kasr_digar.surat * makhraj;
	int m = this->makhraj * kasr_digar.makhraj;
	cout << "subtract:" << s << "/" << m<<endl;

}
void kasr::divide(kasr kasr_digar)
{
	int s = surat * kasr_digar.makhraj;
	int m = makhraj * kasr_digar.surat;
	cout << "divide:" << s << "/" << m<<endl;
}
void kasr::multi(kasr kasr_digar)
{
	int s = surat * kasr_digar.surat;
	int m = makhraj * kasr_digar.makhraj;
	cout << "multi:" << s << "/" << m<<endl;
}
int main()
{
	cout << "kasr 1:" << endl;
	kasr kasr1(0, 1);
	cout << "kasr 2:" << endl;
	kasr kasr2(0, 1);
	string name = "kasr1";
	kasr1.show(name);
	name = "kasr2";
	kasr2.show(name);
	kasr1.sum(kasr2);
	kasr1.multi(kasr2);
	kasr1.divide(kasr2);
}
