#include<iostream>
using namespace std;

class father{
		char fname[20];
		int age;
	public: void setData();
		void getData();
		};
class son:public father
{
	char sname[20];
	int age;
	public: void setData();
		void getData();
	};
void father::setData()
{
	cout<<"enter father name"<<endl;
	cin>>fname;
	cout<<"enter father age"<<endl;
	cin>>age;
}
void father::getData()
{
	cout<<"father name:"<<fname<<endl;
	cout<<"father age:"<<age<<endl;
}

void son::setData()
{
	father::setData();
	cout<<"enter the son name"<<endl;
	cin>>sname;
	cout<<"enter sons age"<<endl;
	cin>>age; 
}
void son::getData()
{
	father::getData();
	cout<<"sons name:"<<sname<<endl;
	cout<<"sons age:"<<age<<endl;
}
main()
{
	 son s1;
	s1.setData();
	s1.getData();
}
