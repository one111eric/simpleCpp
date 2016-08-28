#include "stdafx.h"
#include "lcm.h"
using namespace std;

lcm::lcm()
{
}

void lcm::setup(int n1, int n2)
{
	number1 = n1;
	number2 = n2;
}

int lcm::getLcm() {
	int lcmNumber;
	int max = number1*number2;
	for (int i = 1; i < max; i++) {
		if (max%i == 0 && i%number1 == 0 && i%number2 == 0) {
			lcmNumber = i;
			break;
		}
	}
	return lcmNumber;
}
