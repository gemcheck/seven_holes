#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
// �������, �������� ��� ����� ����� ����������� ������ ���������
int main(array<String^>^ args) { 
	// �������� � ������� ������� CLR (������� ��������� ����������)
	Application::EnableVisualStyles();
	// �������� ���������� �����
	Application::SetCompatibleTextRenderingDefault(false);
	// �������� ���������� �����, �����, ������� ����. ������������
	Project1::MyForm form; 
	Application::Run(%form);
	// ������ ���������� � �������� ������ � �������� �������� ����
	return 0;
}