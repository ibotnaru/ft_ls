/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:12:04 by ibotnaru          #+#    #+#             */
/*   Updated: 2020/02/08 23:52:58 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// printf(">> %s\n", sd->d_name);
void    no_flags( struct dirent *sd)
{
    printf(">> %s\n", sd->d_name);
}

void    l_flag(struct dirent *sd)
{
    printf(">> %s\n", sd->d_name);
}

void    t_flag(struct dirent *sd)
{
    printf(">> %s\n", sd->d_name);
}

void    r_flag(struct dirent *sd)
{
    printf(">> %s\n", sd->d_name);
}

void    R_flag(struct dirent *sd)
{
    printf(">> %s\n", sd->d_name);
}

void    a_flag(struct dirent *sd)
{
    printf(">> %s\n", sd->d_name);
}
