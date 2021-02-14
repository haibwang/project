#include <iostream>
#include "colorbar.h"
#include "format.h"


int main()
{
	colorbar yvusp422_colorbar(1920, 1080, YUV422_YVYU);

	yvusp422_colorbar.generate_colorbar("colorbar_YVYU422.yuv");

	return 0;
}