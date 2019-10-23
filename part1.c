/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:17:06 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/10/23 11:37:47 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		//int	ft_isalpha(int c);
		if (strcmp(av[1], "ft_isalpha") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_isalpha ====\n");
				printf("Real: %d\n", isalpha(atoi(av[2])));
				printf("Mine: %d\n", ft_isalpha(atoi(av[2])));
			}
		}

		//int	ft_isdigit(int c);
		if (strcmp(av[1], "ft_isdigit") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_isdigit ====\n");
				printf("Real: %d\n", isdigit(atoi(av[2])));
				printf("Mine: %d\n", ft_isdigit(atoi(av[2])));
			}
		}

		//int	ft_isalnum(int c);
		if (strcmp(av[1], "ft_isalnum") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_isalnum ====\n");
				printf("Real: %d\n", isalnum(atoi(av[2])));
				printf("Mine: %d\n", ft_isalnum(atoi(av[2])));
			}
		}

		//int	ft_isascii(int c);
		if (strcmp(av[1], "ft_isascii") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_isascii ====\n");
				printf("Real: %d\n", isascii(atoi(av[2])));
				printf("Mine: %d\n", ft_isascii(atoi(av[2])));
			}
		}


		//int	ft_isprint(int c);
		if (strcmp(av[1], "ft_isprint") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_isprint ====\n");
				printf("Real: %d\n", isprint(atoi(av[2])));
				printf("Mine: %d\n", ft_isprint(atoi(av[2])));
			}
		}


		//int	ft_toupper(int c);
		if (strcmp(av[1], "ft_toupper") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_toupper ====\n");
				printf("Real: %c\n", toupper(atoi(av[2])));
				printf("Mine: %c\n", ft_toupper(atoi(av[2])));
			}
		}


		//int	ft_tolower(int c);
		if (strcmp(av[1], "ft_tolower") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_tolower ====\n");
				printf("Real: %c\n", tolower(atoi(av[2])));
				printf("Mine: %c\n", ft_tolower(atoi(av[2])));
			}
		}


		//int	ft_atoi(const char *str);
		if (strcmp(av[1], "ft_atoi") == 0)
		{
			printf("==== ft_atoi ====\n");
			if (ac == 3)
			{
				// cas int max
				printf("Real: %d\n", atoi(av[2]));
				printf("Mine: %d\n", ft_atoi(av[2]));
			}
			else
			{
				// printf("NULL: %d\n", ft_atoi(NULL));
				// printf("NULL: %d\n", atoi(NULL));

				printf("'\\0': %d\n", ft_atoi(""));
				printf("'\\0': %d\n", atoi(""));
			}
		}


		//size_t	ft_strlen(const char *str);
		if (strcmp(av[1], "ft_strlen") == 0)
		{
			if (ac == 3)
			{
				printf("==== ft_strlen ====\n");
				printf("Real: %lu\n", strlen(av[2]));
				printf("Mine: %lu\n", ft_strlen(av[2]));
			}
			else
			{
				printf("==== ft_strlen ====\n");
				// printf("NULL: %lu\n", ft_strlen(NULL));
				// printf("NULL: %lu\n", strlen(NULL));

				printf("'\\0': %lu\n", ft_strlen(""));
				printf("'\\0': %lu\n", strlen(""));
			}
		}

		//char	*ft_strchr(const char *s, int c);
		if (strcmp(av[1], "ft_strchr") == 0)
		{
			if (ac == 4)
			{
				printf("==== ft_strchr ====\n");
				printf("Real: %s\n", strchr(av[2], atoi(av[3])));
				printf("Mine: %s\n", ft_strchr(av[2], atoi(av[3])));
			}
			else
			{
				printf("==== ft_strchr ====\n");

				// printf("s = NULL & c = 'c': %s\n", ft_strchr(NULL, 'c'));
				// printf("s = NULL & c = 'c': %s\n", strchr(NULL, 'c'));

				// printf("s = NULL & c = '\\0': %s\n", ft_strchr(NULL, '\0'));
				// printf("s = NULL & c = '\\0': %s\n", strchr(NULL, '\0'));


				printf("s = '\\0' & c = 'c': %s\n", ft_strchr("", 'c'));
				printf("s = '\\0' & c = 'c': %s\n", strchr("", 'c'));

				printf("s = '\\0' & c = '\\0': %s\n", ft_strchr("", '\0'));
				printf("s = '\\0' & c = '\\0': %s\n", strchr("", '\0'));

				printf("s = av[2] & c = '\\0': %s\n", ft_strchr(av[2], '\0'));
				printf("s = av[2] & c = '\\0': %s\n", strchr(av[2], '\0'));
			}
			
		}


		//char	*ft_strrchr(const char *s, int c);
		if (strcmp(av[1], "ft_strrchr") == 0)
		{
			if (ac == 4)
			{
				printf("==== ft_strrchr ====\n");
				printf("Real: %s\n", strrchr(av[2], atoi(av[3])));
				printf("Mine: %s\n", ft_strrchr(av[2], atoi(av[3])));
			}
			else
			{
				printf("==== ft_strrchr ====\n");
				// printf("s = NULL & c = 'c': %s\n", ft_strrchr(NULL, 'c'));
				// printf("s = NULL & c = 'c': %s\n", strrchr(NULL, 'c'));

				printf("s = '\\0' & c = 'c': %s\n", ft_strrchr("", 'c'));
				printf("s = '\\0' & c = 'c': %s\n", strrchr("", 'c'));

				// printf("s = NULL & c = '\\0': %s\n", ft_strrchr(NULL, '\0'));
				// printf("s = NULL & c = '\\0': %s\n", strrchr(NULL, '\0'));

				printf("s = '\\0' & c = '\\0': %s\n", ft_strrchr("", '\0'));
				printf("s = '\\0' & c = '\\0': %s\n", strrchr("", '\0'));

				printf("s = av[2] & c = '\\0': %s\n", ft_strrchr(av[2], '\0'));
				printf("s = av[2] & c = '\\0': %s\n", strrchr(av[2], '\0'));
			}
		}


		//int	ft_strncmp(const char *s1, const char *s2, size_t n);
		if (strcmp(av[1], "ft_strncmp") == 0)
		{
			if (ac == 5)
			{
				printf("==== ft_strncmp ====\n");
				//cas n = 0
				//cas src et sub = ""
				printf("Real: %d\n", strncmp(av[2], av[3], atoi(av[4])));
				printf("Mine: %d\n", ft_strncmp(av[2], av[3], atoi(av[4])));
			}
			else
			{
				printf("==== ft_strncmp ====\n");

				// printf("s1 = NULL, s2 = av[2]: %d\n", ft_strncmp(NULL, "Hello", 5));
				// printf("s1 = NULL, s2 = av[2]: %d\n", strncmp(NULL, "Hello", 5));
				
				// printf("s1 = NULL, s2 = '\\0': %d\n", ft_strncmp(NULL, "", 5));
				// printf("s1 = NULL, s2 = '\\0': %d\n", strncmp(NULL, "", 5));


				// printf("s1 = NULL, s2 = NULL: %d\n", ft_strncmp(NULL, NULL, 5));
				// printf("s1 = NULL, s2 = NULL: %d\n", strncmp(NULL, NULL, 5));


				// printf("s1 = av[2], s2 = NULL: %d\n", ft_strncmp("Hello", NULL, 5));
				// printf("s1 = av[2], s2 = NULL: %d\n", strncmp("Hello", NULL, 5));
				
				// printf("s1 = '\\0', s2 = NULL: %d\n", ft_strncmp("", NULL, 5));
				// printf("s1 = '\\0', s2 = NULL: %d\n", strncmp("", NULL, 5));


				printf("s1 = NULL, s2 = NULL, n =  0: %d\n", ft_strncmp(NULL, NULL, 0));
				printf("s1 = NULL, s2 = NULL, n =  0: %d\n", strncmp(NULL, NULL, 0));

				printf("s1 = NULL, s2 = '\\0', n =  0: %d\n", ft_strncmp(NULL, "", 0));
				printf("s1 = NULL, s2 = '\\0', n =  0: %d\n", strncmp(NULL, "", 0));

				printf("s1 = '\\0', s2 = NULL, n =  0: %d\n", ft_strncmp("", NULL, 0));
				printf("s1 = '\\0', s2 = NULL, n =  0: %d\n", strncmp("", NULL, 0));
			}
		}


		//size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
		if (strcmp(av[1], "ft_strlcpy") == 0)
		{
			printf("==== ft_strlcpy ====\n");
			if (ac == 5)
			{
				char *dst1 = strdup(av[2]);
				char *dst2 = strdup(av[2]);
				// cas dstsize = 0
				// cas dstsize < len
				//cas src et sub = ""
				printf("==Real==\n");
				printf("res = %lu\ndst = %s\n", strlcpy(dst1, av[3], atoi(av[4])), dst1);
				printf("==Mine==\n");
				printf("res = %lu\ndst = %s\n", ft_strlcpy(dst2, av[3], atoi(av[4])), dst2);
				free(dst1);
				free(dst2);
			}
			else
			{
				// printf("dst= NULL, src= av[2]: %lu\n", ft_strlcpy(NULL, av[2], 5));
				// printf("dst= NULL, src= av[2]: %lu\n", strlcpy(NULL, av[2], 5));
				
				// printf("dst= NULL, src= '\\0': %lu\n", ft_strlcpy(NULL, "", 5));
				// printf("dst= NULL, src= '\\0': %lu\n", strlcpy(NULL, "", 5));


				// printf("dst= NULL, src= NULL: %lu\n", ft_strlcpy(NULL, NULL, 5));
				// printf("dst= NULL, src= NULL: %lu\n", strlcpy(NULL, NULL, 5));


				// printf("dst= av[2], src= NULL: %lu\n", ft_strlcpy(av[2], NULL, 5));
				// printf("dst= av[2], src= NULL: %lu\n", strlcpy(av[2], NULL, 5));

				// printf("dst= '\\0', src= NULL: %lu\n", ft_strlcpy(av[2], NULL, 5));
				// printf("dst= '\\0', src= NULL: %lu\n", strlcpy(av[2], NULL, 5));


				// printf("dst = NULL, src = NULL, n =  0: %lu\n", ft_strlcpy(NULL, NULL, 0));
				// printf("dst = NULL, src = NULL, n =  0: %lu\n", strlcpy(NULL, NULL, 0));

				printf("dst = NULL, src = '\\0', n =  0: %lu\n", ft_strlcpy(NULL, "", 0));
				printf("dst = NULL, src = '\\0', n =  0: %lu\n", strlcpy(NULL, "", 0));

				// printf("dst = '\\0', src = NULL, n =  0: %lu\n", ft_strlcpy("", NULL, 0));
				// printf("dst = '\\0', src = NULL, n =  0: %lu\n", strlcpy("", NULL, 0));
			}
			
		}


		//size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
		if (strcmp(av[1], "ft_strlcat") == 0)
		{
			if (ac == 5)
			{
				char *dst1 = strdup(av[2]);
				char *dst2 = strdup(av[2]);
				printf("==== ft_strlcat ====\n");
				// cas dstsize = 0
				// cas dstsize < len
				//cas src et sub = ""
				printf("==Real==\n");
				printf("res = %lu\ndst = %s\n", strlcat(dst1, av[3], atoi(av[4])), dst1);
				printf("==Mine==\n");
				printf("res = %lu\ndst = %s\n", ft_strlcat(dst2, av[3], atoi(av[4])), dst2);
				free(dst1);
				free(dst2);
			}
			else
			{
				printf("==== ft_strlcat ====\n");
				// printf("dst= NULL, src= av[2]: %lu\n", ft_strlcat(NULL, av[2], 5));
				// printf("dst= NULL, src= av[2]: %lu\n", strlcat(NULL, av[2], 5));
				
				// printf("dst= NULL, src= '\\0': %lu\n", ft_strlcat(NULL, "", 5));
				// printf("dst= NULL, src= '\\0': %lu\n", strlcat(NULL, "", 5));


				// printf("dst= NULL, src= NULL: %lu\n", ft_strlcat(NULL, NULL, 5));
				// printf("dst= NULL, src= NULL: %lu\n", strlcat(NULL, NULL, 5));


				// printf("dst= av[2], src= NULL: %lu\n", ft_strlcat(av[2], NULL, 5));
				// printf("dst= av[2], src= NULL: %lu\n", strlcat(av[2], NULL, 5));
				
				// printf("dst= '\\0', src= NULL: %lu\n", ft_strlcat(av[2], NULL, 5));
				// printf("dst= '\\0', src= NULL: %lu\n", strlcat(av[2], NULL, 5));


				// printf("dst = NULL, src = NULL, n =  0: %lu\n", ft_strlcat(NULL, NULL, 0));
				// printf("dst = NULL, src = NULL, n =  0: %lu\n", strlcat(NULL, NULL, 0));
				
				printf("dst = NULL, src = '\\0', n =  0: %lu\n", ft_strlcat(NULL, "", 0));
				printf("dst = NULL, src = '\\0', n =  0: %lu\n", strlcat(NULL, "", 0));

				// printf("dst = '\\0', src = NULL, n =  0: %lu\n", ft_strlcat("", NULL, 0));
				// printf("dst = '\\0', src = NULL, n =  0: %lu\n", strlcat("", NULL, 0));
			}
		}


		//char	*ft_strnstr(const char *src, const char *sub, size_t len);
		if (strcmp(av[1], "ft_strnstr") == 0)
		{
			printf("==== ft_strnstr ====\n");
			if (ac == 5)
			{
				//cas len = 0
				//cas src et sub = ""
				printf("Real: %s\n", strnstr(av[2], av[3], atoi(av[4])));
				printf("Mine: %s\n", ft_strnstr(av[2], av[3], atoi(av[4])));
			}
			else
			{
				// printf("src= NULL, sub= av[2]: %s\n", ft_strnstr(NULL, av[2], 5));
				// printf("src= NULL, sub= av[2]: %s\n", strnstr(NULL, av[2], 5));

				printf("src= NULL, sub= av[2]: %s\n", ft_strnstr(NULL, "", 5));
				printf("src= NULL, sub= av[2]: %s\n", strnstr(NULL, "", 5));


				// printf("src= NULL, sub= av[2]: %s\n", ft_strnstr(NULL, NULL, 5));
				// printf("src= NULL, sub= av[2]: %s\n", strnstr(NULL, NULL, 5));


				// printf("src= NULL, sub= av[2]: %s\n", ft_strnstr(av[2], NULL, 5));
				// printf("src= NULL, sub= av[2]: %s\n", strnstr(av[2], NULL, 5));

				// printf("src= NULL, sub= av[2]: %s\n", ft_strnstr("", NULL, 5));
				// printf("src= NULL, sub= av[2]: %s\n", strnstr("", NULL, 5));


				// printf("dst = NULL, src = NULL, n =  0: %s\n", ft_strnstr(NULL, NULL, 0));
				// printf("dst = NULL, src = NULL, n =  0: %s\n", strnstr(NULL, NULL, 0));

				printf("dst = NULL, src = '\\0', n =  0: %s\n", ft_strnstr(NULL, "", 0));
				printf("dst = NULL, src = '\\0', n =  0: %s\n", strnstr(NULL, "", 0));

				// printf("dst = '\\0', src = NULL, n =  0: %s\n", ft_strnstr("", NULL, 0));
				// printf("dst = '\\0', src = NULL, n =  0: %s\n", strnstr("", NULL, 0));
			}
		}


		//void	*ft_memset(void *b, int c, size_t len);
		if (strcmp(av[1], "ft_memset") == 0)
		{
			printf("==== ft_memset ====\n");
			if (ac == 4)
			{
				void *b1 = malloc(10);
				void *b2 = malloc(10);
				//cas len = 0
				//cas len > 10
				printf("Real: %s\n", (char *)memset(b1, atoi(av[2]), atoi(av[3])));
				printf("Mine: %s\n", (char *)ft_memset(b2, atoi(av[2]), atoi(av[3])));
				free(b1);
				free(b2);
			}
			else
			{
				printf("b= NULL, len= 0: %s\n", (char *)ft_memset(NULL, atoi(av[2]), 0));
				printf("b= NULL, len= 0: %s\n", (char *)memset(NULL, atoi(av[2]), 0));

				printf("b= NULL, c= '\\0': %s\n", (char *)ft_memset(NULL, '\0', 0));
				printf("b= NULL, c= '\\0': %s\n", (char *)memset(NULL, '\0', 0));

				// segfault
				// printf("b= NULL: %s\n", (char *)ft_memset(NULL, atoi(av[2]), 5));
				// printf("b= NULL: %s\n", (char *)memset(NULL, atoi(av[2]), 5));
			}
		}


		//void	ft_bzero(void *s, size_t n);
		if (strcmp(av[1], "ft_bzero") == 0)
		{
			printf("==== ft_bzero ====\n");
			if (ac == 3)
			{
				void *s1 = malloc(10);
				void *s2 = malloc(10);
				//cas n = 0
				bzero(s1, atoi(av[2]));
				ft_bzero(s2, atoi(av[2]));
				printf("Différence: %d\n", ft_memcmp(s1, s2, atoi(av[2])));
				free(s1);
				free(s2);
			}
			else
			{
				//segfault
				// void *s1 = NULL;
				// ft_bzero(s1, 5);
				// printf("s= NULL: %s\n", (char *)s1);
				// free(s1);

				// void *s3 = NULL;
				// bzero(s3, 5);
				// printf("s= NULL: %s\n", (char *)s3);
				// free(s3);


				void *s2 = NULL;
				ft_bzero(s2, 0);
				printf("s= NULL, n = 0: %s\n", (char *)s2);
				free(s2);

				void *s4 = NULL;
				bzero(s4, 0);
				printf("s= NULL, n = 0: %s\n", (char *)s4);
				free(s4);
			}
		}


		//void	*ft_memcpy(void *dst, const void *src, size_t n);
		if (strcmp(av[1], "ft_memcpy") == 0)
		{
			printf("==== ft_memcpy ====\n");
			if (ac == 4)
			{
				void *dst1 = malloc(10);
				void *dst2 = malloc(10);
				//cas n = 0
				//cas n > size
				printf("Real: %s\n", (char *)memcpy(dst1, (void *)av[2], atoi(av[3])));
				printf("Mine: %s\n", (char *)ft_memcpy(dst2, (void *)av[2], atoi(av[3])));
				free(dst1);
				free(dst2);
			}
			else
			{
				// segfault
				// printf("dst= NULL,src= av[2]: %s\n", (char *)ft_memcpy(NULL, (void *)av[2], 5));
				// printf("dst= NULL,src= av[2]: %s\n", (char *)memcpy(NULL, (void *)av[2], 5));

				// segfault
				// printf("dst= NULL,src= '\\0': %s\n", (char *)ft_memcpy(NULL, "", 5));
				// printf("dst= NULL,src= '\\0': %s\n", (char *)memcpy(NULL, "", 5));


				printf("dst= NULL,src= NULL: %s\n", (char *)ft_memcpy(NULL, NULL, 5));
				printf("dst= NULL,src= NULL: %s\n", (char *)memcpy(NULL, NULL, 5));

				// segfault
				// printf("dst= av[2],src= NULL: %s\n", (char *)ft_memcpy((void *)av[2], NULL, 5));
				// printf("dst= av[2],src= NULL: %s\n", (char *)memcpy((void *)av[2], NULL, 5));

				// segfault
				// printf("dst= '\\0',src= NULL: %s\n", (char *)ft_memcpy("", NULL, 5));
				// printf("dst= '\\0',src= NULL: %s\n", (char *)memcpy("", NULL, 5));


				printf("dst= NULL,src= '\\0', n = 0: %s\n", (char *)ft_memcpy(NULL, "", 0));
				printf("dst= NULL,src= '\\0', n = 0: %s\n", (char *)memcpy(NULL, "", 0));

						printf("dst= '\\0',src= NULL, n = 0: %s\n", (char *)ft_memcpy("", NULL, 0));
						printf("dst= '\\0',src= NULL, n = 0: %s\n", (char *)memcpy("", NULL, 0));


				printf("dst= NULL,src= NULL, n = 0: %s\n", (char *)ft_memcpy(NULL, NULL, 0));
				printf("dst= NULL,src= NULL, n = 0: %s\n", (char *)memcpy(NULL, NULL, 0));

			}
			
		}


		//void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
		if (strcmp(av[1], "ft_memccpy") == 0)
		{
			printf("==== ft_memccpy ====\n");
			if (ac == 5)
			{
				void *dst1 = malloc(10);
				void *dst2 = malloc(10);
				//cas n = 0
				//cas n > size
				printf("Real: %s\n", (char *)memccpy(dst1, av[2], atoi(av[3]), atoi(av[4])));
				printf("Mine: %s\n", (char *)ft_memccpy(dst2, av[2], atoi(av[3]), atoi(av[4])));
				free(dst1);
				free(dst2);
			}
			else
			{
				// printf("dst= NULL,src= av[2]: %s\n", (char *)ft_memccpy(NULL, (void *)av[2], 70, 5));
				// printf("dst= NULL,src= av[2]: %s\n", (char *)memccpy(NULL, (void *)av[2], 70, 5));

				// printf("dst= NULL,src= '\\0': %s\n", (char *)ft_memccpy(NULL, "",70, 5));
				// printf("dst= NULL,src= '\\0': %s\n", (char *)memccpy(NULL, "",70, 5));


				// printf("dst= NULL,src= NULL: %s\n", (char *)ft_memccpy(NULL, NULL, 70, 5));
				// printf("dst= NULL,src= NULL: %s\n", (char *)memccpy(NULL, NULL, 70, 5));


				// printf("dst= av[2],src= NULL: %s\n", (char *)ft_memccpy((void *)av[2], NULL, 70, 5));
				// printf("dst= av[2],src= NULL: %s\n", (char *)memccpy((void *)av[2], NULL, 70, 5));

				// printf("dst= '\\0',src= NULL: %s\n", (char *)ft_memccpy("", NULL, 70, 5));
				// printf("dst= '\\0',src= NULL: %s\n", (char *)memccpy("", NULL, 70, 5));


				printf("dst= NULL,src= '\\0', n = 0: %s\n", (char *)ft_memccpy(NULL, "", 70, 0));
				printf("dst= NULL,src= '\\0', n = 0: %s\n", (char *)memccpy(NULL, "", 70, 0));

				printf("dst= '\\0',src= NULL, n = 0: %s\n", (char *)ft_memccpy("", NULL, 70, 0));
				printf("dst= '\\0',src= NULL, n = 0: %s\n", (char *)ft_memccpy("", NULL, 70, 0));


				printf("dst= NULL,src= NULL, n = 0: %s\n", (char *)ft_memccpy(NULL, NULL, 70, 0));
				printf("dst= NULL,src= NULL, n = 0: %s\n", (char *)memccpy(NULL, NULL, 70, 0));

			}
			
		}


		//void	*ft_memmove(void *dst, const void *src, size_t len);
		if (strcmp(av[1], "ft_memmove") == 0)
		{
			printf("==== ft_memmove ====\n");
			if (ac == 4)
			{
				void *dst1 = malloc(10);
				void *dst2 = malloc(10);
				//cas len = 0
				//cas len > size
				printf("Real: %s\n", (char *)memmove(dst1, av[2], atoi(av[3])));
				printf("Mine: %s\n", (char *)ft_memmove(dst2, av[2], atoi(av[3])));
				free(dst1);
				free(dst2);
			}
			else
			{
				// printf("dst= NULL,src= av[2]: %s\n", (char *)ft_memmove(NULL, (void *)av[2], 5));
				// printf("dst= NULL,src= av[2]: %s\n", (char *)memmove(NULL, (void *)av[2], 5));

				// printf("dst= NULL,src= '\\0': %s\n", (char *)ft_memmove(NULL, "", 5));
				// printf("dst= NULL,src= '\\0': %s\n", (char *)memmove(NULL, "", 5));


				printf("dst= NULL,src= NULL: %s\n", (char *)ft_memmove(NULL, NULL, 5));
				printf("dst= NULL,src= NULL: %s\n", (char *)memmove(NULL, NULL, 5));


				// printf("dst= av[2],src= NULL: %s\n", (char *)ft_memmove((void *)av[2], NULL, 5));
				// printf("dst= av[2],src= NULL: %s\n", (char *)memmove((void *)av[2], NULL, 5));

				// printf("dst= '\\0',src= NULL: %s\n", (char *)ft_memmove("", NULL, 5));
				// printf("dst= '\\0',src= NULL: %s\n", (char *)memmove("", NULL, 5));


				printf("dst= NULL,src= '\\0', n = 0: %s\n", (char *)ft_memmove(NULL, "", 0));
				printf("dst= NULL,src= '\\0', n = 0: %s\n", (char *)memmove(NULL, "", 0));

					printf("dst= '\\0',src= NULL, n = 0: %s\n", (char *)ft_memmove("", NULL, 0));
					printf("dst= '\\0',src= NULL, n = 0: %s\n", (char *)memmove("", NULL, 0));


				printf("dst= NULL,src= NULL, n = 0: %s\n", (char *)ft_memmove(NULL, NULL, 0));
				printf("dst= NULL,src= NULL, n = 0: %s\n", (char *)memmove(NULL, NULL, 0));

			}
			
		}


		//void	*ft_memchr(const void *s, int c, size_t n);
		if (strcmp(av[1], "ft_memchr") == 0)
		{
			printf("==== ft_memchr ====\n");
			if (ac == 5)
			{
				//cas c = '\0'
				//cas n = 0
				//cas n > size
				printf("Real: %s\n", (char *)memchr(av[2], atoi(av[3]), atoi(av[4])));
				printf("Mine: %s\n", (char *)ft_memchr(av[2], atoi(av[3]), atoi(av[4])));
			}
			else
			{
				// printf("s= NULL: %s\n", (char *)ft_memchr(NULL, 70, atoi(av[2])));
				// printf("s= NULL: %s\n", (char *)memchr(NULL, 70, atoi(av[2])));

				printf("s= '\\0': %s\n", (char *)ft_memchr("", 70, atoi(av[2])));
				printf("s= '\\0': %s\n", (char *)memchr("", 70, atoi(av[2])));


				printf("s= NULL, n = 0: %s\n", (char *)ft_memchr(NULL, 70, 0));
				printf("s= NULL, n = 0: %s\n", (char *)memchr(NULL, 70, 0));

				printf("s= '\\0', n = 0: %s\n", (char *)ft_memchr("", 70, 0));
				printf("s= '\\0', n = 0: %s\n", (char *)memchr("", 70, 0));

				printf("s= NULL: %s\n", (char *)ft_memchr(NULL, '\0', 0));
				printf("s= NULL: %s\n", (char *)memchr(NULL, '\0', 0));

				// printf("s= NULL: %s\n", (char *)ft_memchr(NULL, '\0', atoi(av[2])));
				// printf("s= NULL: %s\n", (char *)memchr(NULL, '\0', atoi(av[2])));

				printf("s= '\\0': %s\n", (char *)ft_memchr("", '\0', atoi(av[2])));
				printf("s= '\\0': %s\n", (char *)memchr("", '\0', atoi(av[2])));

			}
		}

		//int	ft_memcmp(const void *s1, const void *s2, size_t n);
		if (strcmp(av[1], "ft_memcmp") == 0)
		{
			printf("==== ft_memcmp ====\n");
			if (ac == 5)
			{
				//cas n = 0
				//cas n > size
				printf("Real: %d\n", memcmp((void *)av[2], (void *)av[3], atoi(av[4])));
				printf("Mine: %d\n", ft_memcmp((void *)av[2], (void *)av[3], atoi(av[4])));
			}
			else
			{
				// printf("s1= NULL, s2= av[2]: %d\n", ft_memcmp(NULL, (void *)av[2], 10));
				// printf("s1= NULL, s2= av[2]: %d\n", memcmp(NULL, (void *)av[2], 10));

				// printf("s1= NULL, s2= '\\0': %d\n", ft_memcmp(NULL, "", 10));
				// printf("s1= NULL, s2= '\\0': %d\n", memcmp(NULL, "", 10));


				// printf("s1= NULL, s2= NULL: %d\n", ft_memcmp(NULL, NULL, 10));
				// printf("s1= NULL, s2= NULL: %d\n", memcmp(NULL, NULL, 10));


				// printf("s1= av[2], s2= NULL: %d\n", ft_memcmp((void *)av[2], NULL, 10));
				// printf("s1= av[2], s2= NULL: %d\n", memcmp((void *)av[2], NULL, 10));

				// printf("s1= '\\0', s2= NULL: %d\n", ft_memcmp("", NULL, 10));
				// printf("s1= '\\0', s2= NULL: %d\n", memcmp("", NULL, 10));


				printf("s1= , s2= , n= : %d\n", ft_memcmp(NULL, "", 0));
				printf("s1= , s2= , n= : %d\n", memcmp(NULL, "", 0));

				printf("s1= , s2= , n= : %d\n", ft_memcmp("", NULL, 0));
				printf("s1= , s2= , n= : %d\n", memcmp("", NULL, 0));


				printf("s1= NULL, s2= NULL, n= 0: %d\n", ft_memcmp(NULL, NULL, 0));
				printf("s1= NULL, s2= NULL, n= 0: %d\n", memcmp(NULL, NULL, 0));

			}
			
		}


		//void	*ft_calloc(size_t count, size_t size);
		if (strcmp(av[1], "ft_calloc") == 0)
		{
			printf("==== ft_calloc ====\n");
			if (ac == 4)
			{
				void *s1;
				void *s2;

				// cas count = size = 0
				s1 = calloc(atoi(av[2]), atoi(av[3]));
				s2 = ft_calloc(atoi(av[2]), atoi(av[3]));
				printf("Real: %s\n", s1);
				printf("Mine: %s\n", s2);
				free(s1);
				free(s2);
			}
		}


		//char	*ft_strdup(const char *s1);
		if (strcmp(av[1], "ft_strdup") == 0)
		{
			printf("==== ft_strdup ====\n");
			if (ac == 3)
			{
				printf("Real: %s\n", strdup(av[2]));
				printf("Mine: %s\n", ft_strdup(av[2]));
			}
			else
			{
				// printf("s= NULL: %s\n", ft_strdup(NULL));
				// printf("s= NULL: %s\n", strdup(NULL));

				printf("s= '\\0': %s\n", ft_strdup(""));
				printf("s= '\\0': %s\n", strdup(""));

			}
		}
	}
}
