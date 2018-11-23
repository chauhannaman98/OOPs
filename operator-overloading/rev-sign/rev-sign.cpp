#include <iostream>

using namespace std;

class rev_sign	{
	int a,b,c;
	public:
		void getdata(int x,int y, int z){
			a=x;	b=y;	c=z;
		}
		void show(void)	{
			cout<<"\nA="<<a;
			cout<<"\nB="<<b;
			cout<<"\nC="<<c;
		}
		void operator - (void)	{
			a=-a;
			b=-b;
			c=-c;
		}
};

int main()	{
	rev_sign t;
	t.getdata(-7,6,-9);
	cout<<"\nt=";
	t.show();
	-t;
	cout<<"\nt=";
	t.show();
	return 0;
}
