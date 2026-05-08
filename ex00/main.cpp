/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:07:56 by edi-maio          #+#    #+#             */
/*   Updated: 2026/05/06 19:57:42 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap a("ClapTrap A");
    ClapTrap b("ClapTrap B");

    a.attack("ClapTrap B");
    b.takeDamage(0);
    b.beRepaired(5);
    b.attack("ClapTrap A");
    a.takeDamage(0);
    a.beRepaired(3);

    return 0;
}