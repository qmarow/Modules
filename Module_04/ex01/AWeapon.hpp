/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 11:11:35 by qmarowak          #+#    #+#             */
/*   Updated: 2021/01/10 11:11:49 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon {
	protected:
		std::string			name;
		int					damage;
		int					apcost;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon & copy);
		AWeapon		&operator=(AWeapon & copy);
		virtual ~AWeapon();
		std::string virtual getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
