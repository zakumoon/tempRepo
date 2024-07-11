#include <iostream>

void f2()
{
	std::cout << "f2 -end\n";
}
void f1()
{
	std::cout << "f1- before!\n";
	f2();
	std::cout << "f1 -after \n";

}

float f3() {
	return 7.5;
	std::cout << "main - before!\n";

}
int f4() {
	return 5;
	std::cout << "main - before!\n";

}
int main()
{
	int x = 70;
	x = f3() + f4();

	std::cout << "main - before!\n";
	f1();
	f2();
	std::cout << "main -after \n";
}




