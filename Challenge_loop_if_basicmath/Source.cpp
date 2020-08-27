#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{ 
	float x, y, N, i, sum ;
	
	x = 0;
	y = 0;
	
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y; 
	N = abs(y - x) +1 ;
	sum = 0;
	if (x < y)
	{ 
		for (i = x;i <= y;i++)
		{
			sum = sum + i;
		}
			int count = x;
			while (count <= y)
			{
				cout << count++ << " " ;
			}
			cout << endl;
			cout << "Average : " << sum / N << endl;
			cout << "SD : " << sqrt(pow((i - (sum / N)), 2) / N - 1) << endl;
	} 
	else 
	{
		for (i = y;i <= x;i++)
		{
			sum = sum + i;
		}
	int count = y;
	while (count <= x)
	{
		cout << count++ << " ";
	}
	cout << endl;
    cout << "Average : " << sum / N << endl;
	cout << "SD : " << sqrt(pow((i - (sum / N)), 2) / N - 1) << endl;
	}
	
	
	system("pause");
	return 0;
}
