#pragma once
#include <string>
#include <vector>
#include <iostream>

class ButtonPress
{
public:
	std::string MButtons;
	virtual void Add(ButtonPress* pressing) = 0;
	virtual void Materialize() = 0;
};

class CalculatorProcessor : public ButtonPress
{

private:
	std::vector<ButtonPress*> press;

public:
	void Add(ButtonPress* pressing)
	{
		press.push_back(pressing);
	}
	void Materialize()
	{
		std::cout << MButtons << std::endl;
	}

};