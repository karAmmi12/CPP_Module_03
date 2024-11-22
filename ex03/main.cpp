/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:42:53 by kammi             #+#    #+#             */
/*   Updated: 2024/11/22 15:24:52 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main()
{
	std::cout << "=== Création d'un objet DiamondTrap avec le constructeur par défaut ===" << std::endl;
	DiamondTrap defaultDiamond;
	std::cout << std::endl;

	std::cout << "=== Création d'un objet DiamondTrap avec un nom ===" << std::endl;
	DiamondTrap namedDiamond("Diamondy");
	std::cout << std::endl;

	std::cout << "=== Utilisation du constructeur de copie ===" << std::endl;
	DiamondTrap copiedDiamond(namedDiamond);
	std::cout << std::endl;

	std::cout << "=== Test de l'opérateur d'assignation ===" << std::endl;
	defaultDiamond = copiedDiamond;
	std::cout << std::endl;

	std::cout << "=== Test de la méthode attack ===" << std::endl;
	namedDiamond.attack("target1");
	namedDiamond.attack("target2");
	std::cout << std::endl;

	std::cout << "=== Test de la méthode takeDamage ===" << std::endl;
	namedDiamond.takeDamage(5);
	namedDiamond.takeDamage(10);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode beRepaired ===" << std::endl;
	namedDiamond.beRepaired(3);
	namedDiamond.beRepaired(10);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode guardGate ===" << std::endl;
	namedDiamond.guardGate();
	std::cout << std::endl;

	std::cout << "=== Test de la méthode highFivesGuys ===" << std::endl;
	namedDiamond.highFivesGuys();
	std::cout << std::endl;

	std::cout << "=== Test de la méthode whoAmI ===" << std::endl;
	namedDiamond.whoAmI();
	std::cout << std::endl;

	std::cout << "=== Affichage des attributs pour vérifier les valeurs ===" << std::endl;
	std::cout << "DiamondTrap " << namedDiamond.getName() << " has " << namedDiamond.getHitPoints() << " hit points, "
			  << namedDiamond.getEnergyPoints() << " energy points, and " << namedDiamond.getAttackDamage() << " attack damage." << std::endl;

	return 0;
}
