/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:04:55 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/12 20:07:35 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int x, y;
	printf("二つの整数を入力せよ。\n");
	printf("整数a : ");	scanf("%d", &x);
	printf("整数b : ");	scanf("%d", &y);
	printf("それらの和は%dで積は%dです。\n", x + y, x * y);
	return (0);
}