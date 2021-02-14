#pragma once
#include "format.h"
class colorbar
{
private:
	int width;
	int height;
	unsigned char* data;
	PIC_FORMAT format;

public:
	colorbar(int w, int h, int f);
	~colorbar();
	int generate_colorbar(const char *path);
};

