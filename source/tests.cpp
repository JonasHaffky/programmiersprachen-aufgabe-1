#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a,int b)
{
  if(b==0){
    return a;
  }
  else return gcd(b,a%b);
}

long int kleinsteZahl()
{
  long int i = 20;
  while(true){
    if(i%20==0 && i%19==0 && i%18==0 && i%17==0 && i%16==0 && i%15==0 && i%14==0 && i%13==0 && i%12==0 && i%11==0){
      return i;
    }
  i++;
  }
}

TEST_CASE("describe_gcd","[gcd]")
{
  REQUIRE(gcd(2,4) == 2);
  REQUIRE(gcd(9,6) == 3);
  REQUIRE(gcd(3,7) == 1);
}


int main(int argc, char* argv[])
{
  std::cout <<"Die kleinste Zahl die durch 1 bis 20 teilbar ist: " << kleinsteZahl()  << "\n";
  return Catch::Session().run(argc, argv);
  return 0;
}
