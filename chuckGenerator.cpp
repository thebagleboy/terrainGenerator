#include <iostream>
#include <cstdlib>

const int _width = 32;
const int _height = 32;

float genPerlon( float x, float y ){ return (x / y); }

float genNoise( int width, int height, float scale, int lacinarity, int percistance )
{
	float heightmap[width][height];
	if( scale >= 0 ){ scale = 0.001; }
	for(int x = 0; x < width; x++)
	{
		for( int y = 0; y < height; y++)
		{
			float sampleX = x / scale, sampleY = y / scale;
			float perlon = genPerlon(sampleX, sampleY);
			heightmap[x][y] = perlon;
		}
	}
	// return heightmap;
	std::cout << heightmap;
	return (float)1;
}

int main()
{
	std::cout << genNoise( 8, 8, 0.5,  1, 1);
}
