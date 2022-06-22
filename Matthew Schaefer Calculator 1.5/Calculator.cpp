#include "Calculator.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

Calculator::Calculator() : wxFrame(nullptr, wxID_ANY, "CAL", wxPoint(300, 300), wxSize(317, 430))
{
	zero = num.CreatezeroButton();
	one = num.CreateoneButton();
	two = num.CreatetwoButton();
	three = num.CreatethreeButton();
	four = num.CreatefourButton();
	five = num.CreatefiveButton();
	six = num.CreatesixButton();
	seven = num.CreatesevenButton();
	eight = num.CreateeightButton();
	nine = num.CreatenineButton();
	add = num.CreateaddButton();
	subtract = num.CreatesubtractButton();
	multiply = num.CreatemultiplyButton();
	divide = num.CreatedivideButton();
	ac = num.CreateacButton();
	equal = num.CreateequalButton();
	binary = num.CreatebinaryButton();
	hex = num.CreatehexButton();
	decimal = num.CreatedecimalButton();
	choice = num.CreatechoiceButton();

	zero = new wxButton(this, 100, "0", wxPoint(120, 330), wxSize(60, 60));
	one = new wxButton(this, 101, "1", wxPoint(60, 270), wxSize(60, 60));
	two = new wxButton(this, 102, "2", wxPoint(120, 270), wxSize(60, 60));
	three = new wxButton(this, 103, "3", wxPoint(180, 270), wxSize(60, 60));
	four = new wxButton(this, 104, "4", wxPoint(60, 210), wxSize(60, 60));
	five = new wxButton(this, 105, "5", wxPoint(120, 210), wxSize(60, 60));
	six = new wxButton(this, 106, "6", wxPoint(180, 210), wxSize(60, 60));
	seven = new wxButton(this, 107, "7", wxPoint(60, 150), wxSize(60, 60));
	eight = new wxButton(this, 108, "8", wxPoint(120, 150), wxSize(60, 60));
	nine = new wxButton(this, 109, "9", wxPoint(180, 150), wxSize(60, 60));
	add = new wxButton(this, 110, "+", wxPoint(240, 90), wxSize(60, 60));
	subtract = new wxButton(this, 111, "-", wxPoint(240, 150), wxSize(60, 60));
	multiply = new wxButton(this, 112, "x", wxPoint(240, 210), wxSize(60, 60));
	divide = new wxButton(this, 113, "÷", wxPoint(240, 270), wxSize(60, 60));
	ac = new wxButton(this, 114, "AC", wxPoint(0, 90), wxSize(60, 60));
	equal = new wxButton(this, 115, "=", wxPoint(240, 330), wxSize(60, 60));
	choice = new wxTextCtrl(this, 116, "", wxPoint(0, 0), wxSize(400, 90));
	binary = new wxButton(this, 117, "BIN", wxPoint(60, 90), wxSize(60, 60));
	hex = new wxButton(this, 118, "HEX", wxPoint(120, 90), wxSize(60, 60));
	decimal = new wxButton(this, 119, "DEC", wxPoint(180, 90), wxSize(60, 60));


}