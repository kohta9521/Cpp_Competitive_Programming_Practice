/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   75.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:46:25 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/08 14:49:42 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int scores[] = {75, 57, 90, 46, 82};
	int sum = 0;
	for (int i = 0; i < 5; i ++)
	{
		sum += scores[i];
	}
	int avg = sum / 5;
	printf("合計点 : %d\n", sum);
	printf("平均点 : %d\n", avg);
	return (0);
}