/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 15:50:26 by edi-maio          #+#    #+#             */
/*   Updated: 2026/05/08 09:24:50 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default DiamondTrap"), ScavTrap("Default DiamondTrap"), FragTrap("Default DiamondTrap")
{
    this->ClapTrap::name = "Default DiamondTrap_clap_name";
    this->name = "Default DiamondTrap";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    this->name = other.name;
    std::cout << "DiamondTrap " << name << " copied!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    ClapTrap::operator=(other);
    ScavTrap::operator=(other);
    FragTrap::operator=(other);
    this->name = other.name;
    std::cout << "DiamondTrap " << name << " copied!" << std::endl;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    std::cout << "DiamondTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    if (amount > this->FragTrap::hitPoints)
        this->FragTrap::hitPoints = 0;
    else
        this->FragTrap::hitPoints -= amount;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    if (this->ScavTrap::energyPoints > 0 && this->FragTrap::hitPoints > 0)
    {
        std::cout << "DiamondTrap " << this->name << " is repairing " << amount << " hit points!" << std::endl;
        this->FragTrap::hitPoints += amount;
        this->ScavTrap::energyPoints--;
    }
    else
        std::cout << "DiamondTrap " << this->name << " cannot be repaired!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << this->ClapTrap::name << std::endl;
}