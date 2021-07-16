#include "Foo.h"

Foo::Foo(int value) :value(value) {}

int Foo::GetValue()
{
	return value;
}

void Foo::SetValue(int value)
{
	this->value = value;
}
