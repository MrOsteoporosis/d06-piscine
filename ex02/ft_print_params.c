/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/17 11:38:57 by averheij       #+#    #+#                */
/*   Updated: 2019/09/17 11:41:16 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

int		main(int argc, char **argv)
{
	int count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		count++;
	}
}
