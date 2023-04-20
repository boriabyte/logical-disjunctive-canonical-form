# Logical disjunctive canonical form 
A program which requests a truth table input by the user, returning the disjunctive normal form associated with the table.

# How it works

The user inputs the number of elements in a given set B, thus the  number of elemental vectors of the given set (the rows of the table) are calculated. From there, the user is also requested to build these vectors by inputting logical 0 or 1 in the table, along with the desired result corresponding to each row.

The table is considered to be a matrix of size Ax4, A being the number of elemental vectors and 4 being the number of the variables plus the chosen result. The result column is checked whether if, on each row, it is 1 or 0, and so all the other columns for the three variables are checked for the same condition. If the result column is 0, it is ignored. If it has 1, the terms associated with the result are either negated (if they are 0), or not (taken as they are). 

For example, if we have a = 0, b = 1, c = 1, result = 1, the output for this respective row in disjunctive form will be: a'bc (' = negation, lack of sign between variables = logical AND operator).
