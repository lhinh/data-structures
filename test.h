#pragma once
#ifndef TEST_H
#define TEST_H

#include <string>
//using namespace std;

class Foo {
public:
	Foo(int num, const std::string& str, const std::string& noNsStr);

	int getNum() const {return num;  }
	std::string getStr() const { return str; }
	std::string getNoNsStr() const { return noNsStr; }

private:
	int num;
	std::string noNsStr;
	std::string str;
};

#endif