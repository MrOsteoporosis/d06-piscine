/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 11:03:35 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 11:09:26 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);


int		main(void)
{
	char str1[] = "abcd";
	char str2[] = "abCd";
	int	a = 1;
	int b = 2;

	ft_putchar('y');
	ft_putchar('\n');

	printf("%s \n", str1);
	printf("%s \n", str2);
	ft_putstr(str1);

	printf("%d \n", ft_strcmp(str1, str2));
	printf("%d \n", ft_strlen(str1));

	printf("%d ", a);
	printf("%d \n", b);
	ft_swap(&a, &b);
	printf("%d ", a);
	printf("%d \n", b);
}
