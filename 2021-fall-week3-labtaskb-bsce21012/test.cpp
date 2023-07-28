#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"


TEST_CASE( "2: Ex0", "[multi-file:2]" ) {
    SECTION( "Sum of first ten odd numbers" ) {
       int x=100;
       REQUIRE(x == printUsingWhileLoop());
    }
}
TEST_CASE( "2: Ex1", "[multi-file:2]" ) {
    SECTION( "Factorial of given number" ) {
      int x = 720;
      REQUIRE(x == factorialUsingWhileLoop(6));
    }
}    

