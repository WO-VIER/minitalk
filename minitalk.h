/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwautier <vwautier@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:56:14 by vwautier          #+#    #+#             */
/*   Updated: 2025/02/23 18:50:00 by vwautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <signal.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"

void		charprocess(char *c, int *bit);
void		signalsetup(struct sigaction *sa);
void		signalsetup(struct sigaction *sa);
void		processchar(char c, int pid);
int			ft_atoi(const char *string);
#endif