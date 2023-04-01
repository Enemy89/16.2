#include <iostream>

bool compare(double ent) {
    double tmp = ent-int(ent);
    return tmp>0? true:false; //если вернулось тру, значит число не целое
}

int main() {
    double entire, fractional, sum=0;
   int count=0;

    do {
        if(count>0) {
            std::cerr << "Error!"<< std::endl;
        }
        std::cout << "Enter the entire and fractional parts of the number separately:" << std::endl;
        std::cin >> entire >> fractional;
        count++;
    }
    while (compare(entire) || !compare(fractional));

    sum = entire + fractional;
    std::cout << sum;
}
