#include <iostream>
#include <string>
double milesToKilometer(double miles) {
	return miles* 1.60934;
}
int main (){
	std :: cout << " Wie viele Meilen wollen Sie in Kilometer umrechnen? \n";
	double miles ;
	std :: cin >> miles;
	std::cout << " Das Ergibt: " << milesToKilometer(miles) << " km \n";
	return 0;
}