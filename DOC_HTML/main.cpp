#include "HTMLWriter.h"
#include <iostream>
using namespace std;

int main()
{
    HTMLWriter hw("Test.html");
    DocWriter *pdw = &hw;
    pdw->Write();

    return 0;
}