#include <bits/stdc++.h>
using namespace std;

long long remove_zeros(int number)
{
	long long no_zeroes = 0;
	int power = 1;
	while (number != 0) 
	{
		if (number % 10 != 0)
		{
			no_zeroes += ((number%10) * power);
			power *= 10;
		}
	
		number /= 10;
	}
		
	return no_zeroes;
}

int main(void) {
	long long a, b;
	cin >> a;
	cin >> b;
	
	long long sum1 = a + b;
	sum1 = remove_zeros(sum1);
		
	long long sum2 = remove_zeros(a) + remove_zeros(b);
	
	if (sum1 == sum2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
