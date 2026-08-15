#include <REGX52.H>
void Delay1ms(unsigned int xms)	//@12.000MHz
{
	unsigned char data i, j;

	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
}


void main()
{

}
