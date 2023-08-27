#include "AForm.hpp"
#include "Intern.hpp"

int main()
{

    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;
    rrf = someRandomIntern.makeForm("Fake robotomy request", "Bender");
    delete rrf;
    return 0;
}
