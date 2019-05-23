#include "volume.h"

volume::volume()
{
	vol = new double;
	*vol = 0;
}

volume::volume(double v)
{
	vol = new double;
	*vol = v;
}

volume::volume(const volume &a)
{
	*vol = *(a.vol);
}

volume::~volume()
{
	if (!vol)
	{
		delete vol;
	}
}

void volume::set_vol(double v)
{
	*vol = v;
}

double volume::get_vol()
{
	return *vol;
}
