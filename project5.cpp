#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to generate a random password
std::string generateRandomPassword(int length) {
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-=_+";

    std::string password;
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    srand(time(0)); // Seed for random number generation

    int passwordLength;

    std::cout << "Random Password Generator\n";
    std::cout << "Enter the desired length of the password: ";
    std::cin >> passwordLength;

    if (passwordLength <= 0) {
        std::cout << "Invalid password length. Please enter a positive number.\n";
        return 1; // Exit program with an error code
    }

    std::string password = generateRandomPassword(passwordLength);

    std::cout << "Generated Password: " << password << "\n";

    return 0; // Exit program successfully
}

