#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test my vector Size function")
{
	Vector v(3);

	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test my vector Size function with memberwise copy")
{
	Vector v(3);
	Vector v1 = v;

	REQUIRE(v.Size() == 3);
	REQUIRE(v1.Size() == 3);
}

TEST_CASE("Test my vector Size function with memberwise/pointer privat vars copy")
{
	Vector v(3);//out constructor--Vector<std::size_t s)
	Vector v1 = v;//my copy constructor--Vecotr(constd Vector& v)

	REQUIRE(v[0] == 0);
	
	v1[0] = 10;

	REQUIRE(v1[0] == 10);
}