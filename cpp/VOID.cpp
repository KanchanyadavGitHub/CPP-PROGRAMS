
#include <iostream>
using namespace std;
void work()
{
	cout << "HELLO EVERYONE";
}
void test()
{
	return work();
}
int main()
{
	test();
	return 0;
}

