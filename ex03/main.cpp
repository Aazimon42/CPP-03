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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
    ClapTrap a("ClapTrap A");
    ScavTrap b("ScavTrap B");
    FragTrap c("FragTrap C");
    DiamondTrap d("DiamondTrap D");

    a.attack("ScavTrap B");
    b.takeDamage(0);
    c.highFivesGuys();
    b.attack("FragTrap C");
    c.takeDamage(20);
    c.attack("ScavTrap B");
    b.takeDamage(30);
    b.guardGate();
    b.beRepaired(20);
    c.beRepaired(10);
    b.attack("DiamondTrap D");
    d.takeDamage(20);
    d.whoAmI();

    return 0;
}