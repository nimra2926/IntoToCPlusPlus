#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Functions.h"


TEST_CASE( "2: Ex0", "[multi-file:2]" ) {
    SECTION( "Task 1: U" ) {
      char ch='A'; char ans='U';
      REQUIRE(ans == lowerOrUpper(ch));
    }
}
TEST_CASE( "2: Ex1", "[multi-file:2]" ) {
    SECTION( "Task 1: L" ) {
      char ch='a'; char ans='L';
      REQUIRE(ans == lowerOrUpper(ch));
    }
}    

TEST_CASE( "2: Ex2", "[multi-file:2]" ) {
    SECTION( "Task 1: I" ) {
      char ch='100'; char ans='I';
      REQUIRE(ans == lowerOrUpper(ch));
    }
}
TEST_CASE( "2: Ex3", "[multi-file:2]" ) {
    SECTION( "Task 2: Leap Year " ) {
      int year=2016; bool ans=true;
      REQUIRE(ans == leapYear(year));
    }
}

TEST_CASE( "2: Ex4", "[multi-file:2]" ) {
   SECTION( "Task 2: Not a Leap Year " ) {
      int year=2015; bool ans=false;
      REQUIRE(ans == leapYear(year));
    }
}
TEST_CASE( "2: Ex5", "[multi-file:2]" ) {
    SECTION( "Task 3: 4 digits" ) {
      int num=1234; int rev=4321;
      REQUIRE(rev == reverseOfNumber(num));
    }
}    

TEST_CASE( "2: Ex6", "[multi-file:2]" ) {
    SECTION( "Task 3: 3 digits" ) {
      int num=256; int rev=652;
      REQUIRE(rev == reverseOfNumber(num)); 
    }
}
TEST_CASE( "2: Ex7", "[multi-file:2]" ) {
    SECTION( "Task 3: 2 digits" ) {
      int num=12; int rev=21;
      REQUIRE(rev == reverseOfNumber(num)); 
    }
}
TEST_CASE( "2: Ex8", "[multi-file:2]" ) {
    SECTION( "Task 3: 1 digit" ) {
      int num=4; int rev=4;
      REQUIRE(rev == reverseOfNumber(num));
    }
}
TEST_CASE( "2: Ex9", "[multi-file:2]" ) {
    SECTION( "Task 4: Allowed#1" ) {
      bool b=true;
      REQUIRE(b == examPermission(20,15,'N'));
    }
} 
TEST_CASE( "2: Ex10", "[multi-file:2]" ) {
    SECTION( "Task 4: Allowed#2" ) {
      bool b=true;
      REQUIRE(b == examPermission(20,18,'Y'));
    }
} 
TEST_CASE( "2: Ex11", "[multi-file:2]" ) {
    SECTION( "Task 4: Not Allowed" ) {
      bool b=false;
      REQUIRE(b == examPermission(20,10,'N'));      
    }
}

