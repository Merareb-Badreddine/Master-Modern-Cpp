#ifndef DATA_H
#define DATA_H

class Data
{
private:
    int x;
    int y;

public:
    // Constructor: initializes x and y with given values
    Data(int FirstElement, int SecondElement);

    // Destructor: called when object is destroyed
    ~Data();

    void SetVariableX(int VariableX);
    void SetVariableY(int VariableY);

   // This function does not modify the object; it only returns for this const
    int getVariableX() const;
    int getVariableY() const;
};

#endif // DATA_H
