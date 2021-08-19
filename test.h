#pragma once
#ifndef TEST_H
#define TEST_H

#include <string>
using namespace std;

class Foo {
public:
	Foo(int num, const std::string& str, const string& noNsStr);

	int getNum() const {return num;  }
	std::string getStr() const { return str; }
	string getNoNsStr() const { return noNsStr; }

private:
	int num;
	string noNsStr;
	std::string str;
};

#endif