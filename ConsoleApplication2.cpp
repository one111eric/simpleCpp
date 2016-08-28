// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "lcm.h"
#include <iostream>
using namespace std;

int main()
{
	lcm x;
	x.setup(4, 6);
	int i = x.getLcm();
	cout << i;

	//x.getLCM;


	return 0;
}

