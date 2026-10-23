#include<iostream>
using namespace std;
class Student 
{
	public: int id; string name;
	Student(){
		id=0; name="Unknown";  }
		Student(int i,string n)
		{  id=i; name=n;  }
		void display()
		{ cout<<"ID:"<<id<<endl;
		   cout<<"Name:"<<name<<endl; }
		   
		};
		
		int main()
		{
			Student s1; Student s2(101,"Rahul");
			s1.display();
			s2.display();
			return 0;
			
		}
		