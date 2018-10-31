#include <iostream>
#include <vector>
using namespace std;

int main()	{
	vector<int> v;
	cout<<"\nInitial size: "<<v.size();
	int n;
	cout<<"\nEnter 5 integers: ";
	for(int i=0;i<5;i++)	{
		cin>>n;
		v.push_back(n);
	}
	cout<<"\nUpdated size: "<<v.size();
	vector<int>::iterator itr=v.begin();
	itr+=2;
	v.insert(itr,11);
	for(int i=0;i<v.size();i++)	{
		cout<<v[i]<<" , ";
	}
}
