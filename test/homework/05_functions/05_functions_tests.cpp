#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify GC TESTING", "verification") {

	string dna1 = "AGCTATAG";
	string dna2 = "CGCTATAG";
	REQUIRE(get_gc_content(dna1) == 0.375);
	REQUIRE(get_gc_content(dna2) == 0.50);
}
TEST_CASE("Verify String Reverse TESTING", "verification") {

	string dna1 = "AGCTATAG";
	string dna2 = "CGCTATAG";
	REQUIRE(reverse_string(dna1) == "GATATCGA");
	REQUIRE(reverse_string(dna2) == "GATATCGC");
}

TEST_CASE("Verify String Character Swap")
{
	string dna1 = "AAAACCCGGT";
	REQUIRE(get_dna_compliment(dna1) == "ACCGGGTTTT");
}