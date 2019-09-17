/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/16 11:48:27 by averheij       #+#    #+#                */
/*   Updated: 2019/09/16 12:03:43 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
