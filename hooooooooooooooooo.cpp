#include<iostream>
using namespace std;
class Student 
{
	public:
	Student()
	{
		cout<<"Contructor called"<<endl;
		
	}
	~Student()
	{
		cout<<"Destructor called"<<endl;
	}
};

int main()
{ 
Student s;
cout<<"Inside main function"<<endl;
return 0;
}