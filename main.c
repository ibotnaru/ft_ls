/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 21:36:44 by ibotnaru          #+#    #+#             */
/*   Updated: 2020/02/10 18:19:37 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     main(int ac, char **av)
{
    DIR             *current_directory;
    struct dirent   *sd;
    char            flag;
    char            strings_arr[MAX_LEN][MAX_LEN];
    int             i;

    i = 0;
    current_directory = opendir(".");
    if (current_directory == NULL)
    {
        printf("Error! Unable to open directory\n");
        exit (1);
    }

    // flag = get_flag(ac, av[1]);
    while ((sd = readdir(current_directory)) != NULL )
    {
        ft_strcpy(strings_arr[i], sd->d_name);
        i++;
    }
    arrstring_sort(strings_arr, i);
    closedir(current_directory);
    return (0);
}