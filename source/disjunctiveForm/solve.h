#pragma once

#include <iostream>
#include <cstring>
#include "declarations.h"
#include "display.h"

void disj() {

	int rows, columns;
	bool isFirstTerm = true;

	for(rows = 0; rows < elementalVectors; rows++)
		for (columns = 0; columns < 4; columns++)
			std::cin >> truthTable[rows][columns];

	
	for (rows = 0; rows < elementalVectors; rows++){


		if (truthTable[rows][3] == 1) {

			if (!isFirstTerm) 
				strcat_s(finalExpression, " + ");
			else 
				isFirstTerm = false; 
			

			if (truthTable[rows][0] == 0)
				strcat_s(finalExpression, "a'");
			else
				strcat_s(finalExpression, "a");

			if (truthTable[rows][1] == 0)
				strcat_s(finalExpression, "b'");
			else
				strcat_s(finalExpression, "b");

			if (truthTable[rows][2] == 0)
				strcat_s(finalExpression, "c'");
			else
				strcat_s(finalExpression, "c");

		}

	}

	std::cout << std::endl;
	std::cout << "The disjunctive normal form for the corresponding truth table is: " << finalExpression << std::endl;
	std::cout << std::endl;
	std::cout << "NOTE: The + sign signifies the OR logical operator. Lack of sign is the AND operator," << std::endl;
	std::cout << "and ' is the negation of the term." << std::endl;

}
