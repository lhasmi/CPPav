/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhasmi <lhasmi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:17:43 by lhasmi            #+#    #+#             */
/*   Updated: 2023/12/03 13:03:28 by lhasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#innclude "ASpell.hpp"

ASpell::ASpell(){}


ASpell::ASpell(std::string const& name, std::string const& effects): name (name), effects(effects){
}

ASpell::ASpell(ASpell const& copy){
	*this = copy;
}

ASpell& ASpell::operator=(ASpell const& assignment) 
{
    if (this == &assignment)
        return *this;
    std::string tempName = assignment.name;
    std::string tempEffects = assignment.effects;
    name = tempName;
    effects = tempEffects;
    return (*this);
}

ASpell:: ~ASpell();

std::string const& ASpell::getName()const
{
	return(this->name);
}

std::string const& ASpell::getEffects()const;
{
	return(this->effects);
}

// This one will simply call the getHitBySpell of the passed object, passing the
// current instance as parameter.
void ASpell::launch(ATarget const& atarget_ref) const{
	atarget_ref.getHitBySpell((*this));
}



// Now you will create an ATarget abstract class, in Coplien's form. It has a type
// attribute, which is a string, and its associated getter, getType, that return a
// reference to constant string.

// In much the same way as ASpell, it has a clone() pure method.

// All these functions can be called on a constant object.

// It has a constructor that takes its type.

// Now, add to your ATarget a getHitBySpell function that takes a reference to
// constant ASpell.

// It will display :

// <TYPE> has been <EFFECTS>!

// <TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
// getEffects function.

// Finally, add to your ASpell class a launch function that takes a reference to
// constant ATarget.

// This one will simply call the getHitBySpell of the passed object, passing the
// current instance as parameter.

// When all this is done, create an implementation of ASpell called Fwoosh. Its
// default constructor will set the name to "Fwoosh" and the effects to
// "fwooshed". You will, of course, implement the clone() method. In the case of
// Fwoosh, it will return a pointer to a new Fwoosh object.

// In the same way, create a concrete ATarget called Dummy, the type of which
// is "Target Practice Dummy". You must also implement its clone() method.

// Add to the Warlock the following member functions:

// * learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.

// You will need a new attribute to store the spells your Warlock knows. Several
// types fit the bill, it's up to you to choose the best one.

// Below is a possible test main and its expected output:

// int main()
// {
//   Warlock richard("Richard", "the Titled");

//   Dummy bob;
//   Fwoosh* fwoosh = new Fwoosh();

//   richard.learnSpell(fwoosh);

//   richard.introduce();
//   richard.launchSpell("Fwoosh", bob);

//   richard.forgetSpell("Fwoosh");
//   richard.launchSpell("Fwoosh", bob);
// }

// ~$ ./a.out | cat -e
// Richard: This looks like another boring day.$
// Richard: I am Richard, the Titled!$
// Target Practice Dummy has been fwooshed!$
// Richard: My job here is done!$
