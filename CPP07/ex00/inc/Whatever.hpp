/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:25:55 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/03 11:26:23 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>

void swap(T &a, T &b)
{
    T temp = b;
    b = a;
    a = temp;
}

template <typename U>

const U& min(const U& a, const U& b)
{
    if (a < b)
        return a;
    else
        return b;
}

template <typename V>

const V& max(const V& a, const V& b)
{
    if (a > b)
        return a;
    else
        return b;
}
