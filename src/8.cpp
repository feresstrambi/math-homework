int main() {
    std::srand(std::time(0));
    int x = std::rand() % 100;
    int y = std::rand() % 100;
    int z = x + y;
    return z;
}
