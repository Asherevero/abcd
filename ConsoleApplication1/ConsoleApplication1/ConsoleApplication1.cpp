
/*#include <iostream>
using namespace std;

int main()
{
	int a, sum;
	sum = 0;
	cin >> a;
	while (a<=500)
	{
		sum = sum + a;
		++a;
	}
	cout << "SUM=\n" << sum;
	return 0;
}*/

/*#include <cmath>
#include <iostream>

int main ()
{
	int x, y;
std::cin >> x ;
std::cout << "enter X:\n";
std::cin >> y;
std::cout << "enter Y:\n";
std::cout << pow(x,y);
	
	return 0;
}*/



#include <iostream>
using namespace std;

/*int main()
{
	float S;
	S = 0;
	for (int i=1;i<=1000;i++)
	{
		S = S + i;
	}
	S = S / 1000;
	cout << "S=" << S;
	return 0;

}*/

/*int main()
{
	int a, b;
	b = 0;
	cin >> a;
	while (1<=a and a<=20)
	{
		b = b * a+a;
		a++;
}
	cout << "B=" << b;
	return 0;

}*/

int main ()
{
	int k;
	cin >> k;
	for (int i=1;i<=10;++i)
	{
		cout << k << "*" << i << "=" << k * i << endl;
	}
	return 0;
}