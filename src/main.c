/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgauthie <bgauthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:29:33 by bgauthie          #+#    #+#             */
/*   Updated: 2023/10/20 15:46:27 by bgauthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	print_args(t_args *args)
{
	printf("1 --> %d\n2 --> %d\n3 --> %d\n4 --> %d\n",
			args->nb_of_philo, args->time_die, args->time_eat, args->time_sleep);
	if (args->goal_eat != 0)
		printf("5 --> %d\n", args->goal_eat);
	return (1);
}


int main(int ac, char **av)
{
	t_args	args;
	
	if (ac == 5 || ac == 6)
	{
		if (!check_args(ac, av, &args))
			return (printf(WRG_ARGS));
		return (print_args(&args));
	}
	return (printf(ERR_ARGS));
}