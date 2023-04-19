#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
// атрибут, задающий для точки входа однопточную модель выполнени
int main(array<String^>^ args) { 
	// передача в главную функцию CLR (массива строковых аргументов)
	Application::EnableVisualStyles();
	// включаем визуальные стили
	Application::SetCompatibleTextRenderingDefault(false);
	// включаем визуальные стили, метод, задющий техн. визуализацию
	Project1::MyForm form; 
	Application::Run(%form);
	// запуск приложения с заданной формой в качестве главного окна
	return 0;
}