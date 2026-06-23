#include "Harl.hpp"

Harl::Harl() {
	_levels[0] = "DEBUG";
    _levels[1] = "INFO";
    _levels[2] = "WARNING";
    _levels[3] = "ERROR";
    _complaints[0] = &Harl::debug;
    _complaints[1] = &Harl::info;
    _complaints[2] = &Harl::warning;
    _complaints[3] = &Harl::error;
}

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; ++i) {
        if (level == _levels[i]) {
            (this->*_complaints[i])();
            return;
        }
    }
    std::cout << "That's fine. For now, anyway..." << std::endl;
}

Harl::~Harl() {
    std::cout << "Harl destroyed" << std::endl;
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
