#include <unistd.h>

/**
 *
 *
 * 
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	write(1, "and that p\niece of art is useful\" - Dora Korpar, 2015-10-19", 11);
	write(2, "and that piece\n of art is useful\" - Dora Korpar, 2015-10-19", 15);
	return (1);
}
