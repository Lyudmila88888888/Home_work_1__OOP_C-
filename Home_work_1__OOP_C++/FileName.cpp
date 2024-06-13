#include <iostream>
#include <string>




int main() {
	setlocale(LC_ALL, "Russian");
	
	class Contact {
		std::string FullName;
		std::string phonenum;
		std::string mobilenum;
		std::string adress;
	public:
		Contact() {
			std::cout << "Констркутор по умолчанию.\n";
			FullName = "no_FullName";
			phonenum = "no_phonenum";
			mobilenum = "no_mobilenum";
			adress = "no_adress";
		}
		Contact(std::string other_FullName, std::string other_phonenum, std::string other_mobilenum, std::string other_adress) {
			std::cout << "Параметрический конструктор.\n";
			FullName = other_FullName;
			phonenum = other_phonenum;
			mobilenum = other_mobilenum;
			adress = other_adress;
		}
		// Геттеры и сеттеры
		std::string getFullName() {
			return FullName;
		}

		void setFullName(std::string name) {
			FullName = name;
		}

		std::string getPhonenum() {
			return phonenum;
		}

		void setPhonenum(std::string phone) {
			phonenum = phone;
		}

		std::string getMobilenum() {
			return mobilenum;
		}

		void setMobilenum(std::string mobile) {
			mobilenum = mobile;
		}

		std::string getAdress() {
			return adress;
		}

		void setAdress(std::string adr) {
			adress = adr;
		}

		~Contact() {
			std::cout << "Деструктор.\n";
		}
		};

	Contact contact1("Петров Фёдор Алексеевич", "3435678", "89125487658", "ул. Пушкина, д. 10");
	Contact contact2("Иванов Степан Петрович", "3435689", "89154572351", "ул. Лермонтова, д. 5");
	Contact contact3("Степанова Ксения Алексеевна", "3437896", "9135697845", "ул. Победы, д. 18");
	Contact contact4("Якунина Светлана Васильевна", "3434756", "89185631245", "ул. Яблоневая, д. 1");

	std::cout << "\nКонтакт 1:\n";
	std::cout << "ФИО: " << contact1.getFullName() << "\n";
	std::cout << "Домашний телефон: " << contact1.getPhonenum() << "\n";
	std::cout << "Личный телефон: " << contact1.getMobilenum() << "\n";
	std::cout << "Адрес: " << contact1.getAdress() << "\n\n";

	std::cout << "Контакт 2:\n";
	std::cout << "ФИО: " << contact2.getFullName() << "\n";
	std::cout << "Домашний телефон: " << contact2.getPhonenum() << "\n";
	std::cout << "Личный телефон: " << contact2.getMobilenum() << "\n";
	std::cout << "Адрес: " << contact2.getAdress() << "\n\n";

	std::cout << "Контакт 3:\n";
	std::cout << "ФИО: " << contact3.getFullName() << "\n";
	std::cout << "Домашний телефон: " << contact3.getPhonenum() << "\n";
	std::cout << "Личный телефон: " << contact3.getMobilenum() << "\n";
	std::cout << "Адрес: " << contact3.getAdress() << "\n\n";

	std::cout << "Контакт 4:\n";
	std::cout << "ФИО: " << contact4.getFullName() << "\n";
	std::cout << "Домашний телефон: " << contact4.getPhonenum() << "\n";
	std::cout << "Личный телефон: " << contact4.getMobilenum() << "\n";
	std::cout << "Адрес: " << contact4.getAdress() << "\n\n";

	return 0;
	}