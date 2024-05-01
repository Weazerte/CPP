/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:23:56 by eaubry            #+#    #+#             */
/*   Updated: 2024/05/01 19:57:04 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConvert.hpp"

int main() {
    ScalarConvert::convert("c");
    ScalarConvert::convert("42");
    ScalarConvert::convert("42.0f");
    ScalarConvert::convert("42.0");
    ScalarConvert::convert("-inff");
}