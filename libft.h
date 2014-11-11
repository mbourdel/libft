/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:36:10 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/11 12:46:21 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	*ft_memset(void *s, int c, size_t n); //							done
void	ft_bzero(void *s, size_t n); //										done
void	*ft_memcpy(void *dest, const void *src, size_t n);//				done
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);//		done
void	*ft_memmove(void *dest, const void *src, size_t n);//				done
void	*ft_memchr(const void *s, int c, size_t n);//						done
int		ft_memcmp(const void *s1, const void *s2, size_t n);//				done
size_t	ft_strlen(const char *str); //										done
char	*ft_strdup(const char *str);//										done
char	*ft_strcpy(char *dest, const char *src);//							done
char	*ft_strncpy(char *dest, const char *src, size_t n);//				done
char	*ft_strcat(char *dest, const char *src);//							done
char	*ft_strncat(char *dest, const char *src, size_t n);//				done
size_t	ft_strlcat(char *dest, const char *src, size_t size);//				done
char	*ft_strchr(const char *src, int c);//								done
char	*ft_strrchr(const char *src, int c);//								done
char	*ft_strstr(const char *s1, const char *s2);//						done
char	*ft_strnstr(const char *s1, const char *s2, size_t n);//			done
int		ft_strcmp(const char *s1, const char *s2);//						done
int		ft_strncmp(const char *s1, const char *s2, size_t n);//				done
int		ft_atoi(const char *str);//											done
int		ft_isalpha(int c);//												done
int		ft_isdigit(int c);//												done
int		ft_isalnum(int c);//												done
int		ft_isascii(int c);//												done
int		ft_isprint(int c);//												done
int		ft_toupper(int c);//												done
int		ft_tolower(int c);//												done

void	*ft_memalloc(size_t size);//										done
void	ft_memdel(void **ap);//											test
char	*ft_strnew(size_t size);//										test
void	ft_strdel(char **as);//											test
void	ft_strclr(char *s);//												done
void	ft_striter(char *s, void (*f)(char *));//						test
void	ft_striteri(char *s, void (*f)(unsigned int, char *));//		test
char	*ft_strmap(const char *s, char (*f)(char));//					test
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));//	test
int		ft_strequ(const char *s1, const char *s2);//					test
int		ft_strnequ(const char *s1, const char *s2, size_t n);//			test
char	*ft_strsub(const char *s, unsigned int start, size_t len);//	test
char	*ft_strjoin(const char *s1, const char *s2);//						done
char	*ft_strtrim(const char *s);//									test
char	**ft_strsplit(const char *s, char c);//									relou
char	*ft_itoa(int n);//													done
void	ft_putchar(char c);//												done
void	ft_putstr(const char *s);//											done
void	ft_putendl(const char *s);//										done
void	ft_putnbr(int n);//													done
void	ft_putchar_fd(char c, int fd);//									done
void	ft_putstr_fd(const char *s, int fd);//								done
void	ft_putendl_fd(const char *s, int fd);//								done
void	ft_putnbr_fd(int n, int fd);//										done

#endif
