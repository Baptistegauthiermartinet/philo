/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgauthie <bgauthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:30:16 by bgauthie          #+#    #+#             */
/*   Updated: 2023/10/20 15:46:42 by bgauthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/*printf*/
# include <stdio.h>

/*memset*/
# include <string.h>

/*malloc*/
# include <stdlib.h>

/*write, usleep*/
# include <unistd.h>

/*gettimeofday*/
# include <sys/time.h>

/*pthread_create, pthread_detach, pthread_join, pthread_mutex_init,
	pthread_mutex_lock, pthread_mutex_unlock, pthread_mutex_destroy*/
# include <pthread.h>

# define ERR_ARGS "Wrong number of arguments.\n"
# define WRG_ARGS "Arguments should be numbers.\n"
typedef struct		s_args
{
	int	nb_of_philo;
	int	time_die;
	int	time_eat;
	int	time_sleep;
	int	goal_eat;
}				t_args;

int	check_args(int ac, char **av, t_args *args);

#endif