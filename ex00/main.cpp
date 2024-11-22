/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:14:08 by kammi             #+#    #+#             */
/*   Updated: 2024/11/22 13:52:31 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	std::cout << "=== Création d'un objet ClapTrap avec le constructeur par défaut ===" << std::endl;
	ClapTrap defaultClap;
	std::cout << std::endl;

	std::cout << "=== Création d'un objet ClapTrap avec un nom ===" << std::endl;
	ClapTrap namedClap("Clappy");
	std::cout << std::endl;

	std::cout << "=== Utilisation du constructeur de copie ===" << std::endl;
	ClapTrap copiedClap(namedClap);
	std::cout << std::endl;

	std::cout << "=== Test de l'opérateur d'assignation ===" << std::endl;
	defaultClap = copiedClap;
	std::cout << std::endl;

	std::cout << "=== Test de la méthode attack ===" << std::endl;
	namedClap.attack("target1");
	namedClap.attack("target2");
	std::cout << std::endl;

	std::cout << "=== Test de la méthode takeDamage ===" << std::endl;
	namedClap.takeDamage(5);
	namedClap.takeDamage(10);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode beRepaired ===" << std::endl;
	namedClap.beRepaired(3);
	namedClap.beRepaired(10);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode beRepaired avec suffisamment d'énergie ===" << std::endl;
	ClapTrap namedClap2("Clappy2");
	namedClap2.takeDamage(5);
	namedClap2.beRepaired(3);
	std::cout << std::endl;

	std::cout << "=== Affichage des attributs pour vérifier les valeurs ===" << std::endl;
	std::cout << "ClapTrap " << namedClap.getName() << " has " << namedClap.getHitPoints() << " hit points, "
			  << namedClap.getEnergyPoints() << " energy points, and " << namedClap.getAttackDamage() << " attack damage." << std::endl;
	std::cout << "ClapTrap " << namedClap2.getName() << " has " << namedClap2.getHitPoints() << " hit points, "
			  << namedClap2.getEnergyPoints() << " energy points, and " << namedClap2.getAttackDamage() << " attack damage." << std::endl;

	return 0;
}
