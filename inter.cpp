#include<iostream>
using namespace std;
class Number 
{
	public: int n;
	Number(int x)
{
	n=x;
}
int operator/(Number obj)
{  return n/obj.n;
}
};
int main()
{ 
Number a(10),b(2);
cout<<a/b;
return 0;
}