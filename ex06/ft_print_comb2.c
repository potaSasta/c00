#include <unistd.h>

void ft_print_comb2()
{
	int x;
	int y;

	int i;
	int j;

	x = 48;



	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			i = 48;
			while (i < 58)
			{
				j = 49;
				while (j < 58)
				{
					if (x+y < i+j)
					{

					
					write(1,&x,1);
					write(1,&y,1);
					write(1," ",1);
					write(1,&i,1);
					write(1,&j,1);
					write(1,", ",2);
					}
					j++;


				}
				j = 48;
				i++;	
			}
			i=48;
			y++;
		}
		y=48;
		x++;


	}
}

