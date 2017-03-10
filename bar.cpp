#include "catch.hpp" 

int bar(int a,int b){ 

return a+b; 
} 
TEST_CASE("bar","[bar]"){ 
REQUIRE( bar(1,2) == 3 ); 
REQUIRE_FALSE( bar(2,3) == 4 ); 
}
