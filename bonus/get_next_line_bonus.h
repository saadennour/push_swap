/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:08:41 by sfarhan           #+#    #+#             */
/*   Updated: 2022/05/11 20:04:03 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd, int BUFFER_SIZE);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);

#endif