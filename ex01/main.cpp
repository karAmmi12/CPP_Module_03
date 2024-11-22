/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:22:51 by kammi             #+#    #+#             */
/*   Updated: 2024/11/22 15:32:59 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "=== Création d'un objet ScavTrap avec le constructeur par défaut ===" << std::endl;
	ScavTrap defaultScav;
	std::cout << std::endl;

	std::cout << "=== Création d'un objet ScavTrap avec un nom ===" << std::endl;
	ScavTrap namedScav("Scavvy");
	std::cout << std::endl;

	std::cout << "=== Utilisation du constructeur de copie ===" << std::endl;
	ScavTrap copiedScav(namedScav);
	std::cout << std::endl;

	std::cout << "=== Test de l'opérateur d'assignation ===" << std::endl;
	defaultScav = copiedScav;
	std::cout << std::endl;

	std::cout << "=== Test de la méthode attack ===" << std::endl;
	namedScav.attack("target1");
	namedScav.attack("target2");
	std::cout << std::endl;

	std::cout << "=== Test de la méthode takeDamage ===" << std::endl;
	namedScav.takeDamage(5);
	namedScav.takeDamage(10);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode beRepaired ===" << std::endl;
	namedScav.beRepaired(3);
	namedScav.beRepaired(10);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode guardGate ===" << std::endl;
	namedScav.guardGate();
	std::cout << std::endl;

	std::cout << "=== Affichage des attributs pour vérifier les valeurs ===" << std::endl;
	std::cout << "ScavTrap " << namedScav.getName() << " has " << namedScav.getHitPoints() << " hit points, "
			  << namedScav.getEnergyPoints() << " energy points, and " << namedScav.getAttackDamage() << " attack damage." << std::endl;

	return 0;
}
