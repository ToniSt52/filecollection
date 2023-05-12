#include "Firstclass.hpp"

Student::Student(std::string par_name, int32_t par_id, int32_t par_bank_account)
: name{par_name}, bank_account_number{par_bank_account}, id_number{par_id}
    {
    }

void Student::print() const
{
    std::cout << "********** Student ************" << std::endl;
    std::cout << "name: " << name << std::endl;
    // we can use the "this" pointer to make the usage 100% clear
    std::cout << "id: " << this->id_number << std::endl;
    std::cout << "num of exams: " << num_of_exams << std::endl;
    std::cout << "bank account: " << bank_account_number << std::endl;
    std::cout << "*******************************" << std::endl;
}

void Student::update_bank_account(const int32_t par_bank_account)
{
    bank_account_number = par_bank_account;
}
auto main() -> int
{
    Student Toni(std::string("Toni"), 1234,56789);
    Toni.update_bank_account(343981236);
    Toni.print();
}
