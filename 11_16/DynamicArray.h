#pragma once

class DynamicArray
{
public:
    DynamicArray(int arraySize);
    ~DynamicArray();

    void SetAt(int index, int value);
    int GetAt(int index) const;
    int GetSize() const;
protected:
    int* arr;
    int size;
};