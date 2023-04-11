/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:12:56 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/08 16:36:17 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minitalk.h"

int checkifvalid(char *str)
{
    int indx;
    
    indx = 0;
    while (str[indx])
    {
        if (str[indx] >= '0' && str[indx] <= '9')
            indx++;
        else
            return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    int pid;
    if (ac < 3)
        printf("Error: to few arguments\n");
    else if (ac > 3)
        printf("Error: to many arguments\n");
    else
    {
        if (checkifvalid(av[1]) == 0)
        {
            pid = ft_atoi(av[1]);
            printf ("%d\n",pid);
        }
        else
            printf ("Error 404\n");
    }
    return (0);
}