/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:53:50 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/18 17:23:06 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <limits>
# include <csignal>
# include <cstdlib>
# include <cstring>
# include <iomanip>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(void);
        ~Weapon(void);
        std::string getType() const;
        void    setType(std::string type);
}