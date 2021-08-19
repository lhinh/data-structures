#include "test.h"

using namespace std;

Foo::Foo(int num, const string& str, const string& noNsStr) {
	Foo::num = num;
	Foo::str = str;
	Foo::noNsStr = noNsStr;
}