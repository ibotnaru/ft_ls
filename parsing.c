/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:49:25 by ibotnaru          #+#    #+#             */
/*   Updated: 2020/02/10 18:19:59 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char    get_flag(int ac, char *param)
{
    char    flag;
    if (ac == 1)
        flag = '0';
    else if (ac > 1)
    {
        if ((param[0] != '-') && (param[2] != '\0') && (param[1] != 'l' ||
            param[1] != 't' || param[1] != 'r' || param[1] != 'r' ||
            param[1] != 'R' || param[1] != 'a'))
        {
            printf("Error, invalid flag! Use ./ft_ls -[ltrRa]\n");
            exit(1);
        }
        if (param[1] == 'l')
            flag = 'l';
        else if (param[1] == 't')
            flag = 't';
        else if (param[1] == 'r')
            flag = 'r';
        else if (param[1] == 'R')
            flag = 'R';
        else if (param[1] == 'a')
            flag = 'a';
    }
    return(flag);
}