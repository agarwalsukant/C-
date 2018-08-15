#include<iostream>
using namespace std;
class myfriend
{
	public:
		myfriend(int x,int y)
		{
			a=x;
			b=y;
		}
	private:
		int a;
		int b;
	friend void displayer(myfriend &frnd);
};
void displayer(myfriend &frnd)
{
	int sum;
	sum=frnd.a+frnd.b;
	cout<<"Sum is "<<sum<<endl;
}
int main()
{
	myfriend mf(10,20);	
	displayer(mf);
	return 0;
}

