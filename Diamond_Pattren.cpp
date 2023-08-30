// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 5; j >=i; j--)
//         {

//          cout<<" ";
//         }
//        for (int j = 0; j < i; j++)
//        {
//         cout<<"*";
//        }
//        for (int j = 0; j < i; j++)
//        {
//         cout<<"*";
//        }

//         cout<<endl;
//     }
//     for (int i = 5; i > 0; i--)
//     {
//         for (int j = 5; j >=i; j--)
//         {

//          cout<<" ";
//         }
//        for (int j = 0; j < i; j++)
//        {
//         cout<<"*";
//        }
//        for (int j = 0; j < i; j++)
//        {
//         cout<<"*";
//        }

//         cout<<endl;
//     }

    
// }


#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    return 0;
}