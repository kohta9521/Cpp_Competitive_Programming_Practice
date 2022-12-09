/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   83.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:06:13 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/09 16:07:58 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	funcB(void)
{
	printf("関数Bです！\n");
}

void	funcA(void)
{
	printf("関数Aです！\n");
	funcB();
}

int	main(void)
{
	funcA();
	
	return (0);
}