#pragma once
#include <string>
using namespace std;

class DocWriter
{
public:
    DocWriter();
    DocWriter(const string& fileName, const string& content);
    void SetFileName(const string& fileName);
    void SetContent(const string& content);

    virtual void Write();
    
protected:
    string _fileName;
    string _content;

};