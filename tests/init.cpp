#include "../include/foo.h"
#include "catch.hpp"

SCENARIO("foo: test", "[testing]") {
	int a = 20;
	int b = 10;
	REQUIRE(foo(a,b) == 70);
	REQUIRE(foo(30,25) == 80);
}