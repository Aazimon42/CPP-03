/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:07:56 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/03 15:07:56 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
    ClapTrap a("ClapTrap A");
    ClapTrap b("ClapTrap B");
    ScavTrap c("ScavTrap C");

    a.attack("ClapTrap B");
    b.takeDamage(0);
    b.beRepaired(5);
    b.attack("ClapTrap A");
    a.takeDamage(0);
    a.beRepaired(3);
    c.guardGate();
    c.attack("ClapTrap A");
    a.takeDamage(20);
    b.attack("ScavTrap C");
    c.takeDamage(0);

    return 0;
}