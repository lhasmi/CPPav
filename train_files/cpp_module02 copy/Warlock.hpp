#pragma once

#include<iostream>
#include<string>
#include <iterator>
#include<map>
// Add to the Warlock the following member functions:

// * learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.

// You will need a new attribute to store the spells your Warlock knows. Several
// types fit the bill, it's up to you to choose the best one.



// Modify the Warlock, now, make it have a spell book that will be created with
// him and destroyed with him. Also make his learnSpell and forgetSpell functions
// call those of the spell book.

// The launchSpell function will have to use the SpellBook to create the spell
// it's attempting to launch.
