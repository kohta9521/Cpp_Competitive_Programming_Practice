/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   312.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:12:33 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 13:15:13 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	string age = "29";
	int n = atoi(age);
	printf("あなたは来年%d歳になります。\n", n + 1);
	return (0);
}