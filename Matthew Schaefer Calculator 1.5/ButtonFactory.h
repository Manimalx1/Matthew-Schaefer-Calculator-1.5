#pragma once
#include "wx/wx.h"

class ButtonFactory : public wxFrame
{
private:
	wxButton* zero = nullptr;
	wxButton* one = nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* four = nullptr;
	wxButton* five = nullptr;
	wxButton* six = nullptr;
	wxButton* seven = nullptr;
	wxButton* eight = nullptr;
	wxButton* nine = nullptr;
	wxButton* add = nullptr;
	wxButton* subtract = nullptr;
	wxButton* multiply = nullptr;
	wxButton* divide = nullptr;
	wxButton* ac = nullptr;
	wxButton* equal = nullptr;
	wxButton* binary = nullptr;
	wxButton* hex = nullptr;
	wxButton* decimal = nullptr;
	wxTextCtrl* choice = nullptr;

public:
	wxButton* CreatezeroButton();
	wxButton* CreateoneButton();
	wxButton* CreatetwoButton();
	wxButton* CreatethreeButton();
	wxButton* CreatefourButton();
	wxButton* CreatefiveButton();
	wxButton* CreatesixButton();
	wxButton* CreatesevenButton();
	wxButton* CreateeightButton();
	wxButton* CreatenineButton();
	wxButton* CreateaddButton();
	wxButton* CreatesubtractButton();
	wxButton* CreatemultiplyButton();
	wxButton* CreatedivideButton();
	wxButton* CreateacButton();
	wxButton* CreateequalButton();
	wxButton* CreatebinaryButton();
	wxButton* CreatehexButton();
	wxButton* CreatedecimalButton();
	wxTextCtrl* CreatechoiceButton();


};

