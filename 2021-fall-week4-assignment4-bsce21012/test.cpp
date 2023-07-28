#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"


TEST_CASE( "2: Ex0", "[multi-file:2]" ) {
    SECTION( "Task 1" ) {
      bool ans = true ;
      REQUIRE(ans == armstrongNumber(407));
    }
}
TEST_CASE( "2: Ex1", "[multi-file:2]" ) {
    SECTION( "Task 1" ) {
      bool ans = false ;
      REQUIRE(ans == armstrongNumber(50));
    }
}    

TEST_CASE( "2: Ex2", "[multi-file:2]" ) {
    SECTION( "Task 2" ) {
      int ans = 16;
      REQUIRE(ans == raiseToPower (4,2));
    }
}
TEST_CASE( "2: Ex3", "[multi-file:2]" ) {
    SECTION( "Task 2" ) {
      int ans = 169;
      REQUIRE(ans == raiseToPower (13,2));
    }
}

TEST_CASE( "2: Ex5", "[multi-file:2]" ) {
   SECTION( "Task 3" ) {
      bool ans= true;
      REQUIRE(ans == palindrome (16461));
    }
}
TEST_CASE( "2: Ex6", "[multi-file:2]" ) {
    SECTION( "Task 3" ) {
      bool ans= false;
      REQUIRE(ans == palindrome (1234));
    }
}    


