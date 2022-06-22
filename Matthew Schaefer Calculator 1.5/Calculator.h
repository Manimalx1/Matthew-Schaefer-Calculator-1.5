#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"



class Calculator : public wxFrame
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


	ButtonFactory num;


public:

	Calculator();

	void clicker(wxCommandEvent& evt);
	void symbol(wxCommandEvent& evt);
	void solve(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

