/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 21:36:41 by ibotnaru          #+#    #+#             */
/*   Updated: 2020/02/10 18:21:01 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

#include "libft/libft.h"
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#define MAX_LEN 100

void    sort_and_display(char flag, struct dirent *sd);
char    get_flag(int ac, char *param);
void    no_flags( struct dirent *sd);
void    l_flag(struct dirent *sd);
void    t_flag(struct dirent *sd);
void    r_flag(struct dirent *sd);
void    R_flag(struct dirent *sd);
void    a_flag(struct dirent *sd);

void arrstring_sort(char arr[][MAX_LEN], int n);

#endif