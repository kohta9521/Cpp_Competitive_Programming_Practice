/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   82.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:02:12 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/09 16:04:10 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	hello(void)
{
	printf("こんにちは\n");
}
int	main(void)
{
	printf("関数を呼び出します\n");
	hello();
	printf("関数の呼び出しが終わりました!!!\n");


	return (0);
}
