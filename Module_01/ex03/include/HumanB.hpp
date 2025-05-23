/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:32:57 by olthorel          #+#    #+#             */
/*   Updated: 2025/04/21 16:32:57 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:

		HumanB(const std::string& name);
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack() const;

	private:

		std::string _name;
		Weapon* _weapon;
};

#endif