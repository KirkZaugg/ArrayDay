#include<iostream>

void dispArray(int in[3][3]) {
    int sum = 0;
    int product = 1;
    std::cout << "Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << in[i][j];
            sum+=in[i][j];
            product*=in[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "The sum is " << sum << "\nThe average is " << sum/9 << "\nThe product is " << product << "\n";
}

int main() {
    int matrix[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    dispArray(matrix);
    return 0;
}