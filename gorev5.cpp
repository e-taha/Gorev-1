#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
	std::ifstream aFile("A.txt");
	std::ifstream bFile("b.txt");
	std::string data;
	std::vector<int> bVector;
	std::vector<std::vector<int> > aMatris;

	while(std::getline(bFile,data)){
		bVector.push_back(stoi(data));
	}

	while(std::getline(aFile,data)){
		std::vector<int> v;
		std::string temp="";
		for (int i = 0; i < data.size(); ++i)
		{
			if(data[i]!=' ') temp+=data[i];
			else{
				v.push_back(stoi(temp));
				temp="";
			}
		}
		v.push_back(stoi(temp));
		aMatris.push_back(v);
	}

	for (int i = 0; i < aMatris.size(); ++i)
	{
		for (int j = 0; j < aMatris[i].size(); ++j)
		{
			std::cout<<aMatris[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
	std::cout<<std::endl;
	for (int i = 0; i < bVector.size(); ++i)
	{
		std::cout<<bVector[i]<<std::endl;
	}


	
	return 0;
}