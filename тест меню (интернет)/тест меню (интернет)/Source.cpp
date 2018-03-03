#include <iostream>

class Foo
{
public:
	Foo(int foo) :
		m_foo(foo)
	{
	}

	void set_foo(int foo)
	{
		m_foo = foo;
	}

	int get_foo() const
	{
		return m_foo;
	}

private:
	int m_foo;
};

int main()
{
	Foo bar(10);

	std::cout << bar.get_foo() << std::endl;

	bar.set_foo(20);

	std::cout << bar.get_foo() << std::endl;

	return 0;
}