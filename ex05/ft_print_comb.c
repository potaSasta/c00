#include <unistd.h>

void ft_putchar(void)
{
	int x;
	int y;
	int z;

	x = 48;
	y = 49;
	z = 50;


	while (x < 58)
	{
		while(y < 58)
		{
			while (z < 58)
			{
				if (x < y && y < z)
				{
					write(1,&x,1);
					write(1,&y,1);
					write(1,&z,1);
					write(1,"  ",2);
				}
				z++;
			}
			z = y;
			y++;
		}
		x++;
		y=x;
	}

}
