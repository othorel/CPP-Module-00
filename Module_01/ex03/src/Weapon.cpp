/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:48:40 by olthorel          #+#    #+#             */
/*   Updated: 2025/04/28 11:41:57 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() const {
	return (_type);	
}

void Weapon::setType(const std::string& type) {
	_type = type;
}
