#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
	int k=std::atoi(argv[1]);
	int rows=std::atoi(argv[2]),columns=(argc-3)/rows;
	std::vector<std::vector<float> > matris(rows);
	for (int i = 0; i < rows; ++i)
	{
		matris[i].resize(columns);
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			matris[i][j]=std::atof(argv[i*columns + j + 3]);
		}
	}
	for (int i = 0; i < columns; ++i)
	{
		matris[0][i]*=k;
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			std::cout<<matris[i][j]<<" ";
		}
		std::cout<<std::endl;
	}

	return 0;
}