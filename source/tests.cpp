#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
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

int checksum(int x){
  int sum = 0;
  while(x > 0){
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int sumMultiples(){
  int sum = 0;
  for(int i = 1;i<=1000;i++){
    if(i%3 == 0||i%5 == 0){
      sum = sum+i;
    } 
  }
  return sum;
}

float volume(float height, float radius){
  float result;
  result = M_PI*height*radius*radius;
  return result; 
}

int factorial(int x){
  if(x==0){
    return 1;
  }
  else return x*factorial(x-1);
}

float binomial(int n,int k){
  float bi;
  return bi = (factorial(n))/(factorial(k)*factorial(n-k));
}

bool is_prime(int x){
  bool res = false;
  if(x==1){
    return res;
  }
  else for(int i=2;i<=x;i++){
        if(x%i==0){
        return res;
        }
        else res=true;
        return res;
  }
}

//float fract(){

//}

TEST_CASE("describe_gcd","[gcd]")
{
  REQUIRE(gcd(2,4) == 2);
  REQUIRE(gcd(9,6) == 3);
  REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("describe_checksum","[checksum]")
{
  REQUIRE(checksum(5) == 5);
  REQUIRE(checksum(123) == 6);
  REQUIRE(checksum(117185) == 23);
}

TEST_CASE("describe_volume","[volume]")
{
  REQUIRE(volume(2,4) == 100.53097f);
  REQUIRE(volume(9,6) == 1017.87604f);
  REQUIRE(volume(3,7) == 461.81412f);
}

TEST_CASE("describe_factorial","[factorial]")
{
  REQUIRE(factorial(4) == 24);
  REQUIRE(factorial(6) == 720);
  REQUIRE(factorial(7) == 5040);
}

TEST_CASE("describe_binomial","[binomial]")
{
  REQUIRE(binomial(4,2) == 6);
  REQUIRE(binomial(9,6) == 84);
  REQUIRE(binomial(7,3) == 35);
}

TEST_CASE("describe_is_prime","[is_prime]")
{
  REQUIRE(is_prime(4) == false);
  REQUIRE(is_prime(1) == false);
  REQUIRE(is_prime(7) == true);
}

//TEST_CASE("describe_fract","[fract]")
//{
  //REQUIRE(fract() == Approx().epsilon(0.001));
  //REQUIRE(fract() == Approx().epsilon(0.001));
  //REQUIRE(fract() == Approx().epsilon(0.001));
//}


int main(int argc, char* argv[])
{
  std::cout <<"Die kleinste Zahl die durch 1 bis 20 teilbar ist: " << kleinsteZahl()  << "\n";
  std::cout <<"Alle Zahlen von 1 bis 1000 die durch 3 oder 5 teilbar sind, ergeben addiert: " << sumMultiples()  << "\n";
  return Catch::Session().run(argc, argv);
  return 0;
}
