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

    // Read-only functions (do not modify object)
    int getVariableX() const;
    int getVariableY() const;
};
