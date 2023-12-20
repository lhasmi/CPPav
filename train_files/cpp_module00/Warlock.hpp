#pragma once

#include<iostream>
#include<string>

class Warlock
{
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock();
		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const & otitle);
		void introduce() const;

	private:
		Warlock();
		Warlock(Warlock const & copy);
		Warlock & operator=(Warlock const & deep_copy);

		std::string name;
		std::string title;
};
