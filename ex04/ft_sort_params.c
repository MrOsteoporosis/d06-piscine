/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 12:21:19 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 12:53:17 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
	ft_putchar('\n');
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int		ft_min2strlen(char *s1, char *s2)
{
	int length;

	length = ft_strlen(s1);
	if (ft_strlen(s2) < length)
	{
		length = ft_strlen(s2);
	}
	return (length);
}

int		ft_strcmp(char *s1, char *s2)
{
	int difference;
	int length;
	int temp;

	difference = 0;
	length = ft_min2strlen(s1, s2);
	temp = 0;
	while (temp < length)
	{
		difference += s1[temp] - s2[temp];
		temp++;
	}
	return (difference);
}

void	ft_swap(char **a, char **b)
{
	char *swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort(char **str, int l)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (a < l)
	{
		b = 1;
		while (b < l - a)
		{
			if (ft_strcmp(str[b], str[b + 1]) > 0)
			{
				ft_swap(&str[b], &str[b + 1]);
			}
			b++;
		}
		a++;
	}
}

int		main(int argc, char **argv)
{
	int count;

	ft_sort(argv, argc);
	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		count++;
	}
}
