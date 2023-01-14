#pragma once
#ifndef USERFUNCTIONS_H
#define USERFUNCTIONS_H

#include "NetworkCommands.h"

#define FILE_NAME "Users.txt"

/*Cuvanje (upis) korisnika u .txt fajl
	@param user korisnik kog upisujemo
*/
void save_user(USER user);

/*Validacija korisnika
	@param user korisnik cije podatke validiramo
*/
bool validate_user(USER user);


#endif /* USERFUNCTIONS_H */