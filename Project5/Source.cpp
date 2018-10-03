#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <conio.h>


using namespace std;

void lowercase(char a[]) {
	int i = 0;
	while (a[i])
	{
		a[i] = (char)tolower(a[i]);
		i++;

	}
}
int sum_arr(int n, ...) {

	int *p = &n;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += *(p + i);
	}
	return sum;

}

template<typename T>

T sum2(T a, ...) {

	T* p = &a;
	T sum = 0;

	while (*p) {

		sum += *p;
		p++;
	}
	return sum;

}

template<typename T1>

T1 calc(char o, T1 arg, ...) {
	va_list p;
	T1 sum = 0;
	T1 prod = 1;

	int count = 0;
	T1 k = arg;
	__crt_va_start(p, arg);

	do {

		if (o == 's' || o == '+') {
			sum += k;
			count++;
		}
		else if (o = '*') prod *= k;


	} while (k = __crt_va_arg(p, T1));


	__crt_va_end(p);

	if (o == 's') return  ((sum) / count);
	else if (o == '+') return sum;
	else if (o == '*') return prod;
}

void calc1() {
	char a[100] = "2+2+3-1";
	int res = 0;
	int s = 0;
	for (int i = 0; i <= strlen(a); i++)
	{


		if (int(a[i]) >= 48 && int(a[i]) <= 57) {

			s = int(a[i]) - 48;
			
			cout << s;
		}
		else
			if (a[i] == '+') {
				res = res + s ;
				
			}	
			else
				if (a[i] == '-')
				{
					res -= s;
					
				}


		//cout << res;


	}
	cout << res;



}


int main() {

	char a[100] = "2+3-2+9-8+7-8";
	int res = int(a[0]) - 48;
	int s = 0;
	cout << res;
	for (int i = 1; i <= strlen(a)-1; i++)
	{

		if (int(a[i]) <= 47 || int(a[i]) >= 58) {

			if (int(a[i]) == 43) {

				s = int(a[i+1]) - 48;
				res += s;
				cout << a[i] << s;
			}
			else
				if (int(a[i]) == 45)
				{
					s = int(a[i + 1]) - 48;
					res -= s;
					cout << a[i] << s;
				}
		}
	}

	cout << "=" <<res;

	//char s[100] = "HELLO";
	//lowercase(s);
	//cout << s << endl;

	//cout << sum_arr(3, 4, 5, 6) << endl;
	//cout << sum2(1, 2, 3, 4, 5, 6, 0) << endl;
	//cout << sum2(1.1, 1., 1.3, 1.5, 0.) << endl;
	//cout << calc('s', 1, 2, 3, 4, 6, 0) << endl;

	//calc1();
	system("pause");
	return 0;
}