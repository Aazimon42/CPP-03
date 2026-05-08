/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 15:29:19 by edi-maio          #+#    #+#             */
/*   Updated: 2026/05/08 09:02:02 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default FragTrap")
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << name << " copied!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << name << " copied!" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << "FragTrap " << this->name << " cannot attack!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
        if (amount > this->hitPoints)
            this->hitPoints = 0;
        else
            this->hitPoints -= amount;
    }
    else
        std::cout << "FragTrap " << this->name << " is already destroyed!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << " is repairing " << amount << " hit points!" << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    }
    else
        std::cout << "FragTrap " << this->name << " cannot be repaired!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " requests a high five :D" << std::endl;
}