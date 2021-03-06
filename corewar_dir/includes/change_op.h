/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_op.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 14:01:36 by enanrock          #+#    #+#             */
/*   Updated: 2018/04/18 06:49:24 by enanrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHANGE_OP_H
# define CHANGE_OP_H

# include "mem.h"
# include "convert_pc_to_uint.h"

void	change_op(t_local_memory *read_head, t_mem *mem, unsigned int skip);

#endif
