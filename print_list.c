#include <unistd.h>
#include <string.h>
#include <stdlib.h>

static void	print_stack(char *message, int message_size, int **list, int *size)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	write(1, message, message_size);
	if (*size == 0)
	{
		write(1, "Vide\n", 5);
		return ;
	}
	while (i < *size)
	{
		str = itoa((*list)[i]);
		j = 0;
		while (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, " | ", 3);
		free(str);
		i++;
	}
	write(1, "\n", 1);
}

void print_list(char *message, int **list, int *size)
{
	if (*size == 0)
	{
		write(2, "La pile est vide.\n", 19);
		return ;
	}
	print_stack(message, strlen(message), list, size);
}
