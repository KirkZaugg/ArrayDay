#include<iostream>

void dispArray(int in[3][3]) {
    int sum
    std::cout << "Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << in[i][j];
        }
        std::cout << "\n";
    }

}

int main() {
    int matrix[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    dispArray(matrix);
    return 0;
}