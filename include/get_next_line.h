/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolkman <mvolkman@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:03:58 by mvolkman          #+#    #+#             */
/*   Updated: 2024/03/14 14:03:35 by mvolkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

char	*init_storage(char *storage);
char	*cleanup_and_return(char **storage, char *line);
char	*extract_line(char **storage);
char	*read_to_storage(int fd, char *storage);
char	*get_next_line(int fd);

#endif
