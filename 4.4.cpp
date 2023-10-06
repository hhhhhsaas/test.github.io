# include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cout << " nhap 3 canh cua tam giac: "; cin >> a >> b >> c;
	if ( ((a+b)>=c) && ((a+c)>=b) && ((b+c)>=a))
	{
		cout << "day la tam giac";
	}
	else cout << " day khong la tam giac";
return 0;
}
