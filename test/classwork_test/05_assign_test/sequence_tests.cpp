#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sequence.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function get_gc_content")
{
	REQUIRE(.375 == get_gc_content("AGCTATAG"));
	REQUIRE(.50 == get_gc_content("CGCTATAG"));
}

TEST_CASE("Test function reverse_string")
{
	REQUIRE("GATATCGA" == reverse_string("AGCTATAG"));
	REQUIRE("GATATCGC" == reverse_string("CGCTATAG"));
}

TEST_CASE("Test function get_dna_complement")
{
	REQUIRE("ACCGGGTTTT" == get_dna_complement("AAAACCCGGT"));
	REQUIRE("ATTTTCCGGG" == get_dna_complement("CCCGGAAAAT"));
}
