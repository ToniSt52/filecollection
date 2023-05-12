#ifndef __FIRSTCLASS__
#define __FIRSTCLASS__

#include <cstdint>
#include <iostream>

class Student
{
    public: 
    int16_t num_of_exams = 6;
    int32_t id_number;
    std::string name;
    Student(std::string par_name, int32_t par_id, int32_t par_bank_account);
    void print() const;
    void update_bank_account(int32_t par_bank_account);


    private:
    int32_t bank_account_number;

    
};

#endif //__FIRSTCLASS__