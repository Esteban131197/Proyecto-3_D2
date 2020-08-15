#include "LoginForm.h"

using namespace Got;

[STAThreadAttribute]
int main() {

    Application::Run(gcnew LoginForm());

    return 0;

}