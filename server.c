/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:13:06 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/08 15:28:22 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
int main ()
{
    pid_t pross_id = getpid();
    printf ("%d\n",pross_id);
    while (1)
    {
        pause();
    }
}
