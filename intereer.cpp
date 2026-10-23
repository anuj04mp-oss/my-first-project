#include<iostream>
using namespace std; 
class Number 
{
	public:
	double n;
	Number(double x){
		n=x;
	}
	double operator/(Number obj)
	{
		return n/obj.n;
	}
};

int main()
{
	Number a(7.5),b(2.5);
	cout<<a/b;
	return 0;
}
