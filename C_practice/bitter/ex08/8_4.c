/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 07:21:17 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/02 07:25:34 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int no;
	scanf("%d", &no);
	if (no == 1) {
		printf("野比のび太\n");
	} else if (no == 2) {
		printf("源静香\n");
	} else if (no == 3) {
		printf("剛田武\n");
	} else if (no == 4) {
		printf("骨川スネ夫\n");
	} else {
		printf("そんな番号の人はいません\n");
	}
	return (0);
}