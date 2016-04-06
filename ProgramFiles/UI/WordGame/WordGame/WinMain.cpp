#include <windows.h>
#include "logInForm.h"

using namespace WordGame;

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	Application::Run(gcnew logInForm());

	return 0;
}