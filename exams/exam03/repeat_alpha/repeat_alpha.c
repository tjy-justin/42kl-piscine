#include <unistd.h>

int	main(void)
{
	int i;
	char *str;
	int rep;

	i = 0;
	rep = 1;

	str = "hello";
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			rep += str[i] - 'a'; // calculate rep times
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			rep += str[i] - 'A';
		}
		while (rep)
		{
			write(1, &str[i], 1); // print based on rep value
			rep--;
		}
		i++;
	}
}