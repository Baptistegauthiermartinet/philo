/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgauthie <bgauthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:43:42 by bgauthie          #+#    #+#             */
/*   Updated: 2023/10/20 15:46:35 by bgauthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	atoi_args(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (str[i])
		nb = nb * 10 + str[i++] - 48;
	return (nb);
}


void	set_args(int ac, char **av, t_args *args)
{
	args->nb_of_philo = atoi_args(av[1]);
	args->time_die = atoi_args(av[2]);
	args->time_eat = atoi_args(av[3]);
	args->time_sleep = atoi_args(av[4]);
	if (ac == 6)
		args->goal_eat = atoi_args(av[5]);
	else
		args->goal_eat = 0;
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_args(int ac, char **av, t_args *args)
{
	int	i;
	
	i = 1;
	while (i < ac)
	{
		if (!is_num(av[i]))
			return (0);
		i++;
	}
	set_args(ac, av, args);
	return (1);
}
