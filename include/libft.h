/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:31:58 by alefranc          #+#    #+#             */
/*   Updated: 2022/05/26 10:17:22 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_dlst
{
	void			*content;
	struct s_dlst	*next;
	struct s_dlst	*prev;
}	t_dlst;

// src_bool
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isnumber(char *str);
int		ft_isprint(int c);

// src_convert
int		ft_atoi(const char *s);
char	*ft_itoa(int n);

// src_debug
void	*ft_calloc_debug(size_t nmemb, size_t size, char *msg);
void	ft_free_debug(void *ptr, char *msg);

// src_dlst
t_dlst	*ft_dlstnew(void *content);
void	ft_dlstadd_back(t_dlst **dlst, t_dlst *new);
void	ft_dlstadd_front(t_dlst **dlst, t_dlst *new);
t_dlst	*ft_dlstfirst(t_dlst *dlst);
t_dlst	*ft_dlstlast(t_dlst *dlst);
size_t	ft_dlstsize(t_dlst *dlst);
size_t	ft_dlstsize_left(t_dlst *dlst);
size_t	ft_dlstsize_right(t_dlst *dlst);
void	ft_dlstdel_one(t_dlst *dlst, void (*del)(void *));
void	ft_dlstdel_all(t_dlst **dlst, void (*del)(void *));
void	ft_dlstiter(t_dlst *dlst, void (*f)(void *));
t_dlst	*ft_dlstmap(t_dlst *dlst, void *(*f)(void *), void (*del)(void *));

// src_io
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// src_lst
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstprevlast(t_list *lst);
int		ft_lstsize(t_list *lst);

// src_math

// src_mem
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

// src_str
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin2(int nb, ...);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

// src_sys

// src_tab
void	ft_strtabfree(char **tab);
char	*ft_strtabjoin(char **tab, char *sep);
size_t	ft_strtablen(char **tab);
size_t	ft_strtabsize(char **tab);

#endif
