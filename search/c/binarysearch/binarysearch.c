#include <stdio.h>

void	print_num(int num, int i, int size)
{
	printf("%d", num);
	if (i != size - 1)
		printf(", ");
}

void	fill_list(int *list, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		list[i] = i;
		print_num(list[i], i, size);
		i++;
	}
}

int	my_atoi(char *str)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (str[i])
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (r);
}

int	main(int argc, char * argv[])
{
	if (argc == 3)
	{
		int	size = my_atoi(argv[1]);
		int	list[size];
		int	i = 0;
		int	to_find = my_atoi(argv[2]);
		int	o = size / 2;

		printf("Creating sorted list of: %d elements \n", size);
		printf("{");
		fill_list(list, size);
		printf("}\n");
		size = size / 2;
		printf("Searching...\n");
		while (i < size)
		{
			if (to_find > list[o])
				o = (o / 2) + size; 
			else if (to_find < list[o])
				o = (o / 2) - size; 
			if (list[o] == to_find)
				break ;
			i++;
		}
		printf("%d\n", list[o]);
		return (0);
	}
	else
		printf("!! You should introduce 2 arguments:\n");
		printf("1. Integer (size of the sorted list).\n");
		printf("2. Number to find.\n");
		printf("=> The input errors are not controlled, so introduce just numbers.\n");
	return (0);
}
