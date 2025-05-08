/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:50:35 by ineiras-          #+#    #+#             */
/*   Updated: 2025/04/24 13:02:46 by ineiras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h> 	// Non usable printf
# include <stdarg.h> 	// Argumentos variables
# include <stdlib.h>	// Malloc & Free
# include <unistd.h>	// Write
# include <limits.h>	// 

// Estuctura t_list (Bonus libft)
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	tl_list;

// Estructura ps_list (push_swap)
/*
typedef struct push_swap_list
{
	int						*index;
	void					*number;
	struct push_swap_list	*next;
}	ps_list;
*/

// Libft (Basic Functions)
int		ft_isalpha(int c);
int		ft_isdigit(int arg);
int		ft_isalnum(int arg);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
tl_list	*ft_lstnew(void *content);
void	ft_lstadd_front(tl_list **lst, tl_list *newnode);
int		ft_lstsize(tl_list *lst);
tl_list	*ft_lstlast(tl_list *lst);
void	ft_lstadd_back(tl_list **lst, tl_list *newnode);
void	ft_lstdelone(tl_list *lst, void (*del)(void*));
void	ft_lstclear(tl_list **lst, void (*del)(void*));
void	ft_lstiter(tl_list *lst, void (*f)(void *));
tl_list	*ft_lstmap(tl_list *lst, void *(*f)(void *), void (*del)(void *));

// Printf 
int		ft_printf(char const *str, ...);
int		ft_printchar(char c, int i);
int		ft_print_string(const char *str, int count);
int		ft_print_number(int n, int counter);
int		ft_print_unumber(unsigned int n, int counter);
int		ft_print_hexa(unsigned int num, int counter, char letter);
int		ft_print_ptr(void *addres, int counter);

#endif
