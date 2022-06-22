#include "App.h"
#include "Calculator.h"
#include "ButtonFactory.h"

wxIMPLEMENT_APP(App);

App::App()
{

}
App::~App()
{

}
bool App::OnInit()
{
	calculator = new Calculator();
	calculator->Show();
	return true;
}
