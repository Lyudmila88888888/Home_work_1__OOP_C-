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
			std::cout << "����������� �� ���������.\n";
			FullName = "no_FullName";
			phonenum = "no_phonenum";
			mobilenum = "no_mobilenum";
			adress = "no_adress";
		}
		Contact(std::string other_FullName, std::string other_phonenum, std::string other_mobilenum, std::string other_adress) {
			std::cout << "��������������� �����������.\n";
			FullName = other_FullName;
			phonenum = other_phonenum;
			mobilenum = other_mobilenum;
			adress = other_adress;
		}
		// ������� � �������
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
			std::cout << "����������.\n";
		}
		};

	Contact contact1("������ Ը��� ����������", "3435678", "89125487658", "��. �������, �. 10");
	Contact contact2("������ ������ ��������", "3435689", "89154572351", "��. ����������, �. 5");
	Contact contact3("��������� ������ ����������", "3437896", "9135697845", "��. ������, �. 18");
	Contact contact4("������� �������� ����������", "3434756", "89185631245", "��. ���������, �. 1");

	std::cout << "\n������� 1:\n";
	std::cout << "���: " << contact1.getFullName() << "\n";
	std::cout << "�������� �������: " << contact1.getPhonenum() << "\n";
	std::cout << "������ �������: " << contact1.getMobilenum() << "\n";
	std::cout << "�����: " << contact1.getAdress() << "\n\n";

	std::cout << "������� 2:\n";
	std::cout << "���: " << contact2.getFullName() << "\n";
	std::cout << "�������� �������: " << contact2.getPhonenum() << "\n";
	std::cout << "������ �������: " << contact2.getMobilenum() << "\n";
	std::cout << "�����: " << contact2.getAdress() << "\n\n";

	std::cout << "������� 3:\n";
	std::cout << "���: " << contact3.getFullName() << "\n";
	std::cout << "�������� �������: " << contact3.getPhonenum() << "\n";
	std::cout << "������ �������: " << contact3.getMobilenum() << "\n";
	std::cout << "�����: " << contact3.getAdress() << "\n\n";

	std::cout << "������� 4:\n";
	std::cout << "���: " << contact4.getFullName() << "\n";
	std::cout << "�������� �������: " << contact4.getPhonenum() << "\n";
	std::cout << "������ �������: " << contact4.getMobilenum() << "\n";
	std::cout << "�����: " << contact4.getAdress() << "\n\n";

	return 0;
	}