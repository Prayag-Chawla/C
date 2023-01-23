// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1 = 5;
//     int num2 = 10;
    
//     int sum = 0;
    
//     for (int i = num1; i <= num2; i++)
//         sum = sum + i;
    
//     cout << sum;
    
//     return 0;
// }


// Your First C++ Program

// #include <iostream>

// int main() {
//     std::cout << "Hello World!";
//     return 0;
// }

int enough (int goal)
{
int n = 1, sum = 1;
while (sum < goal)
sum += ++n;
return n;
}