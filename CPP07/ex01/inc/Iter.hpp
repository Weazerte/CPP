/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:16:10 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/03 12:07:29 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstddef>

template <typename T, typename F>

void	iter(T *array, size_t arr_len, F& foo) {
	if (array == NULL)
		return ;
	for (size_t i = 0; i < arr_len; i++){
		foo(array[i]);
	}
		
}