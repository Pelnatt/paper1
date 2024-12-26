#include <iostream>

using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "���� �Ҹ�" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "�۸�!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "�߿�!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() {
        cout << "����!" << endl;
    }
};
int main() {
    Animal* animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}