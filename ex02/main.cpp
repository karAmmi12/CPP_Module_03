/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:15:38 by kammi             #+#    #+#             */
/*   Updated: 2024/11/22 14:12:36 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
	std::cout << "=== Création d'un objet FragTrap avec le constructeur par défaut ===" << std::endl;
	FragTrap defaultFrag;
	std::cout << std::endl;

	std::cout << "=== Création d'un objet FragTrap avec un nom ===" << std::endl;
	FragTrap namedFrag("Pedro");
	std::cout << std::endl;

	std::cout << "=== Utilisation du constructeur de copie ===" << std::endl;
	FragTrap copiedFrag(namedFrag);
	std::cout << std::endl;

	std::cout << "=== Test de l'opérateur d'assignation ===" << std::endl;
	defaultFrag = copiedFrag;
	std::cout << std::endl;

	std::cout << "=== Test de la méthode attack ===" << std::endl;
	namedFrag.attack("Sandro");
	namedFrag.attack("Sandro");
	std::cout << std::endl;

	std::cout << "=== Test de la méthode takeDamage ===" << std::endl;
	namedFrag.takeDamage(9);
	namedFrag.takeDamage(1);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode beRepaired ===" << std::endl;
	namedFrag.beRepaired(10);
	std::cout << std::endl;

	std::cout << "=== Test de la méthode highFivesGuys ===" << std::endl;
	namedFrag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "=== Affichage des attributs pour vérifier les valeurs ===" << std::endl;
	std::cout << "FragTrap " << namedFrag.getName() << " has " << namedFrag.getHitPoints() << " hit points, "
			  << namedFrag.getEnergyPoints() << " energy points, and " << namedFrag.getAttackDamage() << " attack damage." << std::endl;

	return 0;
}
