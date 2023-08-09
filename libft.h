/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:30:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/08/09 16:13:07 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <strings.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(unsigned char content);
int		ft_isalpha(char c);
int		ft_isascii(int content);
int		ft_isdigit(int content);
int		ft_isprint(int content);
char	*ft_strdup(const char *src);
void	*ft_memchr(const void *bigptr, int c, size_t len);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *string, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t concat_size);
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t	ft_strlen(const char *content);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s1, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
// Functions prototypes to be tested