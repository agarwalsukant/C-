#include<iostream>
using namespace std;
class birthdate
{
	public:
		birthdate(int d,int m,int y)
		{
			month=m;
			date=d;
			year=y;
		}
		void display()
		{
			cout<<"date of birth is "<<date<<"/"<<month<<"/"<<year<<endl;
		} 
	private:
		int month;
		int date;
		int year;
};
class myinfo
{
	public:
		myinfo(string n, birthdate b)
		:name(n),bo(b)		
		{}
		void show_info();
	private:
		string name;
		birthdate bo;
};
void myinfo::show_info()
{
	cout<<"Name is:"<<name<<endl;
	bo.display();
}
int main()
{
	birthdate bd(19,03,1997);
	myinfo mi("Sukant",bd);
	mi.show_info();
	return 0;
} 		
