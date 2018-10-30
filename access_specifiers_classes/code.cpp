#include <iostream>

using namespace std;

class base {
	protected:		//comment out this line to put 'a' as a private member
		int a;
	public:
		void get_a()	{
			cout<<"\nEnter the value of a: ";
			cin>>a;
		}
};

class first	{
	protected:
		int b;
	public:
		void get_b()	{
			cout<<"\nEnter the value of b: ";
			cin>>b;
		}
};

class second : public base, public first	{
	int c;
	public:
		void mul();
};

void second::mul()	{
	cout<<"\nMultiplication is "<<a*b;
}

int main()	{
	second s;
	s.get_a();
	s.get_b();
	s.mul();
	return 0;
}
