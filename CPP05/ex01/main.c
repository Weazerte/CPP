/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:48:17 by eaubry            #+#    #+#             */
/*   Updated: 2024/03/25 17:58:05 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat Denis("Denis", 77);
    Bureaucrat Paul("Paul", 5);
    Bureaucrat Jean("Jean", 18);
    Form A("A", 15, 20);

    try
    {
        A.beSigned(Denis);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}