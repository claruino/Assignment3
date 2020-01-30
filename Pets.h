#include <iostream>
#include <string>
using namespace std;

class Pets{
  public:
    Pets();
    Pets(string name, int age, string type, double weight);
    void printInfo();

    void setName(string name);
    string getName();

    void setAge(int age);
    int getAge();

    void setType(string type);
    string getType();

    void setWeight(double weight);
    double getWeight();

  private:
    std::string m_name;
    int m_age;
    std::string m_type;
    double m_weight;
};
