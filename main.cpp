#include <iostream>
#include <string>

using namespace std;

// Deklarationer av funktionerna
void skrivInfo();
int lasEttTal();
string lasOp();
void ordna(int &x, int &y);
int berakna(int x, int y, string op);
void skrivResultat(int res);

int main()
{
	// Här ska deklaration av variabler finnas
	int tal1, tal2, svar;
	string op;

	skrivInfo();
	tal1 = lasEttTal();
	tal2 = lasEttTal();
	op = lasOp();
	ordna(tal1, tal2);
	svar = berakna(tal1, tal2, op);
	skrivResultat(svar);

	system("pause");
	return 0;
}

// Definitioner av funktionerna

void skrivInfo()
{
	cout << "Lite random info om programmet haer!" << endl;
}

int lasEttTal()
{
	int tal = 0;
	cout << "Skriv in ett heltal:" << endl;
	cin >> tal;
	return tal;
}

string lasOp()
{
	string op;
	cout << "Skriv in raknesatt: " << endl;
	cin >> op;
	return op;
}

void ordna(int &x, int &y)
{
	int temp;

	if(x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
}

int berakna(int x, int y, string op)
{
	int beraknad = 0;

	if(op == "a")
	{
		while(x<=y)
		{
			beraknad += x;
			x++;
		}
	}
	else if(op == "m")
	{
		while(x<=y)
		{
			if(beraknad == 0)
			{
				beraknad = x;
			}
			else
			{
				beraknad *= x;
			}
			x++;
		}
	}
	else if(op == "k")
	{
		while(x<=y)
		{
			beraknad += x*x;
			x++;
		}
	}

	return beraknad;
}

void skrivResultat(int res)
{
	cout << "Resultatet blev: " << res << endl;
}