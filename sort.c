/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:49:34 by ibotnaru          #+#    #+#             */
/*   Updated: 2020/02/10 18:20:10 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    sort_and_display(char flag, struct dirent *sd)
{
    if (flag == '0')
        no_flags(sd);
    else if (flag == 'l')
        l_flag(sd);
    else if (flag == 't')
        t_flag(sd);
    else if (flag == 'r')
        r_flag(sd);
    else if (flag == 'R')
        R_flag(sd);
    else if (flag == 'a')
        a_flag(sd);    
}

void    arrstring_sort(char arr[][MAX_LEN], int size) 
{ 
    int i;
    int j;
    int min_idx;
    char min_str[MAX_LEN];
    char temp[MAX_LEN];

    i = 0;
    j = 0;
    min_idx = 0; 
    while (i < (size - 1)) 
    { 
        min_idx = i;
        j = i + 1;
        ft_strcpy(min_str, arr[i]); 
        while (j < size) 
        { 
            if (ft_strcmp(min_str, arr[j]) > 0) 
            { 
                ft_strcpy(min_str, arr[j]); 
                min_idx = j; 
            }
            j++;
        } 
        if (min_idx != i) 
        { 
            ft_strcpy(temp, arr[i]);
            ft_strcpy(arr[i], arr[min_idx]);
            ft_strcpy(arr[min_idx], temp);
        }
        i++; 
    }
} 