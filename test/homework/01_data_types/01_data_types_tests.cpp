#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Verify Test Multiply Numbers", "verification") {
	REQUIRE(multiply_numbers(10) == 50);
}

TEST_CASE("Verify Test Multiply Numbers2", "verification") {
	REQUIRE(multiply_numbers(2) == 10);
}