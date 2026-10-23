#include<iostream>
using namespace std;
class Addition 
{
	public: int sum;
	Addition(int a)
	{  sum=a; }
	Addition(int a, int b)
	{  sum=a+b; }
	Addition(int a,int b,int c)
	{
		sum = a + b + c; }
		void display(){
		cout<<"Sum ="<<sum<<endl;
		

	}	};
	
	int main()
	{
		Addition a1(10);
		Addition a2(10,20);
		Addition a3(10,20,30);
		a1.display();
		a2.display();
		a3.display();
		return 0;
			}
	