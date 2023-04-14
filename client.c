/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:12:56 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/14 03:06:26 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	take_bits(char *str)
{
	int	indx;
	int pofs;
	int shed;
	
	indx = 0;
	shed = 1;
	while (str[indx])
	{
		pofs = 7;
		while (pofs >= 0)
		{
			if ((str[indx] & shed << pofs) == 0)
				printf ("0");
				//kill(av[1],)
			else
				printf ("1");
			pofs--;
		}
		printf (" ");
		indx++;
	}
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
        if (check_if_valid(av[1]) == 0)
            {
                pid = ft_atoi(av[1]);
            }
        else
            printf ("Error 404\n");
        take_bits(av[2]);
    }
    return (0);
}   