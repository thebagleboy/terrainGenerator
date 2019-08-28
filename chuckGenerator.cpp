#include <iostream>
#include <cstdlib>

const int _width = 32;
const int _height = 32;

int genNoise( int width, int height, int lacinarity, int percistance ){
	float heights;
	for(int w = 0; w < _width; w++)
	{
		for( int h = 0; h < _height; h++)
		{
			std::cout << rand() % _maxHeight;
		}
		std::cout << "\n";
	}
	return 0;
}

int main()
{
	genNoice( 8, 8, 1, 1);
}
