#include "DocWriter.h"
#include <string>

class HTMLWriter : public DocWriter
{
public:
    HTMLWriter();
    ~HTMLWriter();

    void Write();

    void SetFont(const string& fontName, int fontSize, const string& fontColor);
protected:
    string _fontName;
    string _fontSize;
    string _fontColor;
};