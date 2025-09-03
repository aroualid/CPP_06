int main() {
    std::srand((time(0)));

    Base *obj = generate();

    std::cout << BOLD_ITALIC_CYAN << "Using identify(Base *p): " << RESET << std::endl;
    identify(obj);

    std::cout << BOLD_ITALIC_CYAN << "Using identify(Base &p): " << RESET << std::endl;
    identify(*obj);

    delete obj;

    return 0;
}
