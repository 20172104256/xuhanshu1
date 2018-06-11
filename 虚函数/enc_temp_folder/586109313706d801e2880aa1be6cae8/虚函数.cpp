
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
    virtual void display();//Ðéº¯Êý
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
	cout << "»ùÀà" << feet << "Ó¢³ß" << inches << "Ó¢´ç" << endl;
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
cout << "ÅÉÉúÀà" << feet << "Ó¢³ß" << inches << "Ó¢´ç" << endl;
}
int main()
{
	CFeet *p;
	p = new CMyFeet;
	p->setfeet(3);
	p->setinches(8);
	p->display();
	p->CFeet::display();
	return 0;
}

