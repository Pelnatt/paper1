#include <iostream>

using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "悼拱 家府" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "港港!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "具克!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() {
        cout << "澜皋!" << endl;
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