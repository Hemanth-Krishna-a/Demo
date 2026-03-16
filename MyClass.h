#include <string>

class MyClass{
    public:
        std::string name;
        int age;

        void printAge();
        void printName();
        void setName(const std::string s);
        void setAge(int a);
};

