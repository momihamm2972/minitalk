/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:13:06 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/13 23:48:37 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
void hello (int sig){
    if (sig == SIGUSR1){
        printf("hello");
    }
}
int main ()
{
    pid_t pross_id = getpid();
    printf ("%d\n",pross_id);
    while (1)
    {
    }
}
