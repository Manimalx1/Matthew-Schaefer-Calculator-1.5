#pragma once

class AddCommand;
class SubtractCommand;
class MultiplyCommand;
class DivideCommand;

class IBaseCommands
{
private:
	virtual bool execute();

	AddCommand* addcommand = nullptr;
	SubtractCommand* subtractcommand = nullptr;
	MultiplyCommand* multiplycommand = nullptr;
	DivideCommand* dividecommand = nullptr;

public:


};

