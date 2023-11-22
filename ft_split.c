/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgtaib <zgtaib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:07:47 by zgtaib            #+#    #+#             */
/*   Updated: 2023/11/22 17:20:25 by zgtaib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countingwords(char const *s, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	
	while (s[x] != '\0')
	{
		while (s[x] != '\0' && s[x] == c)
			x++;
		if (s[x] != '\0')
			count++;
		while (s[x] != '\0' && s[x] != c)
			x++;
	}
	return (count);
}

static char	*fillword(int *x, char const *s, char c)
{
	int		t;
	char	*str;
	int		y;
	int		wordsize;

	y = 0;
	t = *x;
	while (s[*x] != '\0' && s[*x] == c)
		(*x)++;
	t = *x;
	while (s[*x] != '\0' && s[*x] != c)
		(*x)++;
	wordsize = *x - t;
	str = (char *)malloc((wordsize + 1) * sizeof(char));
	if (!str)
		return (0);
	while (t + y < *x)
	{
		str[y] = s[t + y];
		y++;
	}
	str[y] = '\0';
	return (str);
}

static void	freed(char **res)
{
	int	i;

	i = 0;
	if (res)
	{
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		y;
	int		x;
	int		i;

	y = 0;
	i = 0;
	x = 0;
	if (!s)
		return (0);
	str = (char **)malloc((countingwords(s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (y < countingwords(s, c))
	{
		str[y] = fillword(&x, s, c);
		if (!str[y])
		{
			freed(str);
			return (NULL);
		}
		y++;
	}
	str[countingwords(s, c)] = 0;
	return (str);
}
// int main()
// {
//     const char *inputString = NULL;
//     char delimiter = '\t';

//     char **result = ft_split(inputString, delimiter);
//     // Print the split words
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Word %d: %s\n", i + 1, result[i]);
//     }
// }
// int main()
// {
//     const char *inputString = "hello";
//     char delimiter = ' ';

//     char **result = ft_split(inputString, delimiter);
//     // Print the split words
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Word %d: %s\n", i + 1, result[i]);
//     }
// }
// int main()
// {
//     char *str = NULL;
//     char c = '\0';
//     char **res = ft_split(str,c);
// 	if(res == NULL)
// 		printf("null");
//     int i = 0;
//     // while(res[i])
//     // {
//     //     printf("%s\n", res[i]);
//     //     i++;
//     // }
// }
