#pragma once


// Make a TargetGenerator class, in canonical form, and as before,
// non-copyable.

// It will have the following functions:

// * void learnTargetType(ATarget*), teaches a target to the generator

// * void forgetTargetType(string const &), that makes the generator forget a
//   target type if it's known

// * ATarget* createTarget(string const &), that creates a target of the
//   specified type
