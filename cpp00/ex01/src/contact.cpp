#include "contact.hpp"

Contact::Contact() {
	_contact_id = 0;
	is_empty = true;
}

void	Contact::setContact(int id,
		std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret) {
	_contact_id = id;
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
	is_empty = false;
}

std::string Contact::_cropString(std::string old_str, size_t max_length) {
    if (old_str.length() > max_length) {
        return old_str.substr(0, max_length - 1) + ".";
    }
    return std::string(max_length - old_str.length(), ' ') + old_str;
}

void	Contact::showContact(int index, int max_length) {
	std::cout.fill(' ');
	std::cout.width(max_length);
	std::cout << index << "|";
	std::cout.width(max_length);
	std::cout << _cropString(this->_first_name, max_length) << "|";
	std::cout.width(max_length);
	std::cout << _cropString(this->_last_name, max_length) << "|";
	std::cout.width(max_length);
	std::cout << _cropString(this->_nickname, max_length) << std::endl;
}
