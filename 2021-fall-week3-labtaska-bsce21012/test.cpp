#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"


TEST_CASE( "2: Ex0", "[multi-file:2]" ) {
    SECTION( "base to power: invalid input" ) {
       int x = -1;
       REQUIRE(x == baseToPowerExponent(2,-1));
    }
}
TEST_CASE( "2: Ex1", "[multi-file:2]" ) {
    SECTION( "base to power: valid input" ) {
      int x = 64;
      REQUIRE(x == baseToPowerExponent(4,3));
    }
}    

TEST_CASE( "2: Ex2", "[multi-file:2]" ) {
    SECTION( "decimal to binary (3 digits)" ) {
        int dec = 15;
        int bin = 0;
        
        bin = decimalToBinary(dec);
  
        REQUIRE(bin == 1111);
    }
}
TEST_CASE( "2: Ex3", "[multi-file:2]" ) {
    SECTION( "decimal to binary (4 digits)" ) {
        int dec = 12;
        int bin = 0;
        
        bin = decimalToBinary(dec);
  
        REQUIRE(bin == 1100);
    }
}
