#include <iostream>

using namespace std;

class one	{
	public:
		virtual void show()	{
			cout<<"class one function";
		}
};

class two:public one	{
	public:
		void show()	{
			cout<<"class two function";
		}
};

int main()	{
	one obj1;
	two obj2;
	
	one *p;
	//p=&obj1;	//here, p belongs to class one
	p=&obj2; //uncomment to see the runtime polymorphism, p will belong to class two then
	
	p->show();
}
