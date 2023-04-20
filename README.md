# Logical disjunctive canonical form 
A program which requests a truth table input by the user, returning the disjunctive normal form associated with the table.


## Table of contents

### 1. Motivation and origins
### 2. How it works
### 3. Technologies used
### 4. Challenges & potential uses



## 1. Motivation and origins

This was originally homework assigned at a course at Uni, Discrete Mathematics & Fractals; it mostly dealt with logical expressions, logical operators, automatas, fractals, Boolean algebra and the professor told us that its purpose "was formative, not informative, as is the entirety of mathematics", hinting at the fact that the nature of this course was that of developing logical and mathematical thinking, especially useful in programming.


## 2. How it works

The user inputs the number of elements in a given set B, thus the  number of elemental vectors of the given set (the rows of the table) are calculated. From there, the user is also requested to build these vectors by inputting logical 0 or 1 in the table, along with the desired result corresponding to each row.

The table is considered to be a matrix of size Ax4, A being the number of elemental vectors and 4 being the number of the variables plus the chosen result. The result column is checked whether if, on each row, it is 1 or 0, and so all the other columns for the three variables are checked for the same condition. If the result column is 0, it is ignored. If it has 1, the terms associated with the result are either negated (if they are 0), or not (taken as they are). 

For example, if we have a = 0, b = 1, c = 1, result = 1, the output for this respective row in disjunctive form will be: a'bc (' = negation, lack of sign between variables = logical AND operator).


Regarding the software, we enter the Arduino IDE, assign the pins and write the code: we read words from the console, we check which letters are which, we convert them to Morse symbols, showcase them on the display and emmit the coresponding sounds, with the appropiate pauses and durations, and voila.


## 3. Technologies used 

### a) software
      - C++
  
  No special hardware was used.
     
 
## 4. Challenges & potential uses

There were no challenges met in the developing of this application.

If developed further, for example, if given a more user friendly interface, it could become useful when doing logical calculations and trying to find disjunctive and conjunctive (if added in future versions) expressions for a given truth table. As of now, it is useful only when trying to find the disjunctive canonical form based on such a table.
