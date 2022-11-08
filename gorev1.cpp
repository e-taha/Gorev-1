#include <iostream>
#define G 9.80665 // m2/s


int main(int argc, char const *argv[])
{
	float t,x;
	std::cin>>t;

	x=0.5*G*t*t;

	std::cout<< x <<std::endl;	

	
	return 0;
}