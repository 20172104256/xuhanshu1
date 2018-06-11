
#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	void setfeet(int f);
	void  setinches(int ich);
    virtual void display();//虚函数
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinches(int ich)
{
	inches = ich % 12;
	feet = feet + ich / 12;
}
void CFeet::display()
{
	cout << "基类" << feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyFeet :public CFeet
{
public:
	void display();
};
void CMyFeet::display()
{
cout << "派生类" << feet << "英尺" << inches << "英寸" << endl;
}
int main()
{
	CFeet *p;
	p = new CMyFeet;//输出派生类，因为用了虚函数。不用虚函数的话直接输出基类。
	p->setfeet(3);
	p->setinches(8);
	p->display();
	p->CFeet::display();
	return 0;
}

