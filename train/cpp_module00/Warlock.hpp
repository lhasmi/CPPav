#pragma once

#include<iostream>
#include<string>

class Warlock
{
	public:
		Warlock(std::string const & name, std::string const & title);//const &
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;

		void setTitle(std::string const & other_title);
		void introduce() const;

	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const & copy);
		Warlock &operator=(Warlock const & deep_copy);
};
