#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a,int b)
{
  return 1;
}

long int kleinsteZahl()
{
  long int i = 0;
  for(;;){
    i++;
    if(!(i%1) && !(i%2) && !(i%3) && !(i%4) && !(i%5) && !(i%6) && !(i%7) && !(i%8) && !(i%9) && !(i%10) && !(i%11) && !(i%12) && !(i%13) && !(i%14) && !(i%15) && !(i%16) && !(i%17) && !(i%18) && !(i%19) && !(i%20)) break;
  }
  return i;
}

TEST_CASE("describe_gcd","[gcd]")
{
  REQUIRE(gcd(2,4) == 2);
  REQUIRE(gcd(9,6) == 3);
  REQUIRE(gcd(3,7) == 1);
}


int main(int argc, char* argv[])
{
  std::cout << kleinsteZahl()  << "\n";
  return Catch::Session().run(argc, argv);
  return 0;
}
