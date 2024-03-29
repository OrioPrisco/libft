/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: OrioPrisco <47635210+OrioPrisco@users      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:55:38 by OrioPrisc         #+#    #+#             */
/*   Updated: 2024/02/06 13:25:02 by OrioPrisc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# define WORD_TYPE unsigned long
# define BYTE unsigned char

int			ft_maxint(int a, int b);
int			ft_minint(int a, int b);
int			ft_absint(int a);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(int i);
size_t		ft_strlen(const char *c);
size_t		ft_strnlen(const char *c, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strncpy(char *dest, const char *src, size_t size);
size_t		ft_strcpy(char *dest, const char *src);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_fake_strcoll(const char *s1, const char *s2);
// if accept is null, everything is accepted
int			ft_strcmp_custom(const char *s1, const char *s2,
				int (*compare)(char, char), int (*accept)(int));
int			ft_case_comp(char a, char b);
int			ft_lcase_comp(char a, char b);
size_t		ft_index(const char *s, char c);
char		*ft_strchr(const char *s, char c);
char		*ft_strchrnul(const char *s, char c);
char		*ft_strnchrnul(const char *s, char c, size_t n);
char		*ft_strrchr(const char *s, char c);
void		*ft_memchr(const void *s, unsigned char c, size_t n);
void		*ft_memchrnul(const void *s, unsigned char c, size_t n);
int			ft_memcmp(const void *i1, const void *i2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strtrim(const char *s, const char *set);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
long		ft_strtol(const char *nptr, char **endptr, int base);
const char	*ft_next_non_space(const char *str);
char		*ft_next_non_match(const char *str, int (*f)(int));
_Bool		ft_strtol_check_int(const char *str, const char *endptr,
				long parsed);
_Bool		ft_strtol_check_long(const char *str, const char *endptr,
				long parsed);
long double	ft_strtold(const char *nptr, char **endptr);
char		*ft_strpbrknul(const char *s, const char *accept);
size_t		ft_strspn(const char *str, const char *accept);
size_t		ft_strcspn(const char *str, const char *reject);
void		ft_memswp(void *foo, void *bar, size_t size);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
