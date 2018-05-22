// test0522.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream" //the different of <>  and ""
using namespace std;

class CComplex
{
private:
	int *p;
	int x;
	static int flag;//jingtai  ,,,
public:
	CComplex()
	{
		p = new int;
		x = 0;
		flag = 1;
	}
	/*CComplex( CComplex &a)
	{
	p=new int ;
	*p=*a.p;
	x=a.x;
	}*/
	void setvalue(int b, int c)
	{
		*p = b;
		x = c;
	}
	void out()
	{
		cout << "*p=" << *p << endl;
		cout << "x=" << x << endl;
	}
	~CComplex()
	{
		if (flag != 0)
		{
			delete p;
			flag = 0;
		}
	}//析构函数return 0时运行
};
int CComplex::flag = 0;

int main()
{
	CComplex ot1;
	ot1.out();
	ot1.setvalue(100, 1000);
	CComplex ot2(ot1);
	ot2.out();
	ot1.setvalue(200, 2000);
	ot1.out();
	ot2.out();

	return 0;
}


