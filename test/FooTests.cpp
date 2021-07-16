#include <gtest/gtest.h>
#include "Foo.h"

TEST(FooTest, SetValueShouldChangeTheValue)
{
	Foo foo(0);
	foo.SetValue(100);
	ASSERT_EQ(foo.GetValue(), 100);
}