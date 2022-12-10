/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   91.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:45:39 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/10 22:47:06 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int a = 70;
	printf("変数aには70が入っています。\n");

	long addrA = (long)&a;
	printf("変数Aのアドレス: %ld\n", addrA);
	return (0);
}