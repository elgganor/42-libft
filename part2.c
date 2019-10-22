/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:08:41 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/21 10:08:43 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>

char myMap(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		// char	*ft_substr(char const *s, unsigned int start, size_t len)
		if (strcmp(av[1], "ft_substr") == 0)
		{
			printf("=== ft_substr ===\n");
			if (ac == 5)
			{
				// cas len = 0
				// cas len > size
				// cas len < 0
				// cas start = 0
				// cas start > size
				// cas start < 0
				printf("%s\n", ft_substr(av[2], atoi(av[3]), atoi(av[4])));
			}
			else
			{
				// cas start = 0
				// cas start > size
				// cas start < 0
				// cas len = 0
				// cas len > size
				// cas len < 0
				printf("s= NULL: %s\n", ft_substr(NULL, atoi(av[2]), atoi(av[3])));
				printf("s= NULL: %s\n", ft_substr(NULL, 0, atoi(av[3])));
				printf("s= NULL: %s\n", ft_substr(NULL, atoi(av[2]), 0));
				printf("s= NULL: %s\n", ft_substr(NULL, 0, 0));

				printf("s= '\\0': %s\n", ft_substr("", atoi(av[2]), atoi(av[3])));
				printf("s= '\\0': %s\n", ft_substr("", 0, atoi(av[3])));
				printf("s= '\\0': %s\n", ft_substr("", atoi(av[2]), 0));
				printf("s= '\\0': %s\n", ft_substr("", 0, 0));
			}
		}


		// char	*ft_strjoin(const char *s1, const char *s2)
		if (strcmp(av[1], "ft_strjoin") == 0)
		{
			printf("=== ft_strjoin ===\n");
			if (ac == 4)
			{
				// cas "" et ""
				printf("%s\n", ft_strjoin(av[2], av[3]));
			}
			else
			{
				printf("s1=NULL ,s2= str:%s\n", ft_strjoin(NULL, "hello world"));
				printf("s1=NULL ,s2= '\\0':%s\n", ft_strjoin(NULL, ""));

				printf("s1=str ,s2= NULL:%s\n", ft_strjoin("hello world", NULL));
				printf("s1= '\\0',s2= NULL:%s\n", ft_strjoin("", NULL));

				printf("s1= NULL,s2= NULL:%s\n", ft_strjoin(NULL, NULL));
			}
			
		}


		// char	*ft_strtrim(char const *s1, char const *set)
		if (strcmp(av[1], "ft_strtrim") == 0)
		{
			printf("=== ft_strtrim ===\n");
			if (ac == 4)
			{
				// cas "" et ""
				printf("%s\n", ft_strtrim(av[2], av[3]));
			}
			else
			{
				printf("s= NULL,set= set: %s\n", ft_strtrim(NULL, " +,"));
				printf("s= NULL,set= '\\0': %s\n", ft_strtrim(NULL, ""));
				
				printf("s= str,set= NULL: %s\n", ft_strtrim("  Hello world  ", NULL));
				printf("s= '\\0',set= NULL: %s\n", ft_strtrim("", NULL));

				printf("s= NULL,set= NULL: %s\n", ft_strtrim(NULL, NULL));
			}
		}


		// char	**ft_split(const char *s, char c)
		if (strcmp(av[1], "ft_split") == 0)
		{
			printf("=== ft_split ===\n");
			if (ac == 3)
			{
				char **tab;
				char *str = "Foo Bar Baz";
				int	i;

				// cas ""
				// cas '\0'
				
				printf("str= str, c = ' '\n");
				tab = ft_split(str, ' ');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);

				printf("str= str, c = 'a'\n");
				tab = ft_split(str, 'a');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);

				printf("str= str, c = 'l'\n");
				tab = ft_split(str, 'l');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);

				printf("str= str, c = '\\0'\n");
				tab = ft_split(str, '\0');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);

				printf("str= '', c = ' '\n");
				tab = ft_split("", ' ');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);

				printf("str= '', c = 'a'\n");
				tab = ft_split("", 'a');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);

				printf("str= '', c = 'l'\n");
				tab = ft_split("", 'l');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);

				printf("str= '', c = '\\0'\n");
				tab = ft_split("", '\0');
				i = 0;
				while (tab[i] != 0)
				{
					printf("%d => %s\n", i, tab[i]);
					i++;
				}
				free(tab);
			}
			else
			{
				char **tab;

				tab = ft_split(NULL, 'c');
				while (tab)
				{
					printf("%s\n", *tab);
					tab++;
				}
				free(tab);
			}
		}


		// char	*ft_itoa(int n)
		if (strcmp(av[1], "ft_itoa") == 0)
		{
			printf("=== ft_itoa ===\n");
			if (ac == 3)
			{
				// cas int max
				// cas int min
				printf("%s\n", ft_itoa(atoi(av[2])));
			}
		}


		// char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
		if (strcmp(av[1], "ft_strmapi") == 0)
		{
			printf("=== ft_strmapi ===\n");
			if (ac == 3)
			{
				printf("%s\n", ft_strmapi(av[2], &myMap));
			}
			else
			{
				printf("%s\n", ft_strmapi(NULL, &myMap));
				printf("%s\n", ft_strmapi("", &myMap));
			}
		}


		// void	ft_putchar_fd(char c, int fd)
		if (strcmp(av[1], "ft_putchar_fd") == 0)
		{
			printf("=== ft_putchar_fd ===\n");
			int fd = open("file_c.txt", O_CREAT | O_RDWR);

			ft_putchar_fd('6', fd);
			ft_putchar_fd('\n', fd);

			close(fd);
		}


		// void	ft_putstr_fd(char *s, int fd)
		if (strcmp(av[1], "ft_putstr_fd") == 0)
		{
			printf("=== ft_putstr_fd ===\n");
			int fd = open("file_s.txt", O_CREAT | O_RDWR);

			if (ac == 3)
			{
				ft_putstr_fd(av[2], fd);
			}
			else
			{
				ft_putstr_fd(NULL, fd);
				ft_putstr_fd("", fd);
			}
			close(fd);
		}


		// void	ft_putendl_fd(char *s, int fd)
		if (strcmp(av[1], "ft_putendl_fd") == 0)
		{
			printf("=== ft_putendl_fd ===\n");
			int fd = open("file_e.txt", O_CREAT | O_RDWR);

			if (ac == 3)
			{
				ft_putendl_fd(av[2], fd);
			}
			else
			{
				ft_putendl_fd(NULL, fd);
				ft_putendl_fd("", fd);
			}
			close(fd);
		}


		// void	ft_putnbr_fd(int n, int fd)
		if (strcmp(av[1], "ft_putnbr_fd") == 0)
		{
			printf("=== ft_putnbr_fd ===\n");
			int fd = open("file_n.txt", O_CREAT | O_RDWR);

			if (ac == 3)
			{
				// cas int min et max
				ft_putnbr_fd(atoi(av[2]), fd);
			}
			close(fd);
		}
	}
	return (0);
}