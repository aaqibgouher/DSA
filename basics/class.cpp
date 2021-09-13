#include<iostream>
#include<string>
using namespace std;

// 1. basic class example
// class Fruit {
//     public: 
//         string name;
//         int price;
// };

// int main() {
//     Fruit my_fruit;   /*made object*/

//     my_fruit.name = "Apple";
//     my_fruit.price = 300;

//     cout<<my_fruit.name<<" "<<my_fruit.price;
//     return 0;
// }

// 2. class and its method
// class Fruit {
//     public:
//         void get_price(int a) {
//             cout<<"price is "<<a;
//         }
// };

// int main() {

//     Fruit my_fruit;
//     my_fruit.get_price(300);

//     return 0;
// }

// class and calling its method 
// class Fruits {
//     public: 
//         int get_price(int price);
// };

// int Fruits::get_price(int price) {
//     return price - 10;
// }

// int main() {
//     Fruits my_fruit;

//     cout<<my_fruit.get_price(200);

//     return 0;
// }

// constructor
// class Fruit {
//     public: 
//         string name;
//         int price;

//         Fruit(string x, int b) {
//             name = x;
//             price = b;
//         }
// };

// int main() {
//     Fruit apple("Apple", 200);
//     Fruit banana("Banana", 150);

//     cout<<apple.name<<" "<<apple.price<<endl;
//     cout<<banana.name<<" "<<banana.price;

//     return 0;
// }

// class Fruit {
//     public: 
//         string name;
//         int price;

//         Fruit(string x, int b);
// };

// Fruit::Fruit(string x, int b) {
//     name = x;
//     price = b;
// }

// int main() {
//     Fruit apple("Apple", 200);
//     Fruit banana("Banana", 150);

//     cout<<apple.name<<" "<<apple.price<<endl;
//     cout<<banana.name<<" "<<banana.price;

//     return 0;
// }

// access modifier

int main() {
    string name;
    cin>>name;
    cout<<name;

    return 0;
}
