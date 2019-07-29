/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:23:19 by jolam             #+#    #+#             */
/*   Updated: 2018/09/11 21:22:58 by jolam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1024
# define MAX_FD 4864

# include "libft/libft.h"
# include "fcntl.h"
# include "unistd.h"
# include "stdlib.h"
# include "sys/types.h"
# include "sys/uio.h"

int		ft_new_line(char **s, char **line, int fd);
int		get_next_line(const int fd, char **line);

#endif
