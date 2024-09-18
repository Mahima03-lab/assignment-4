#include <iostream>
struct Month {
    const char *name;
    int day;
};

int main() {
    // Array of month names
    const char *month[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    
    // Array of days in each month
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Printing the table
    std::cout<<"TABLE USING ARRAY\n\n";
    std::cout << "Month\t\tDays" << std::endl;
    for (int i = 0; i < 12; i++) {
       std:: cout << month[i] << "\t\t" << days[i] <<std:: endl;
    }



    // Array of structures
    Month months[12] = {
        {"January", 31}, {"February", 28}, {"March", 31}, {"April", 30}, 
        {"May", 31}, {"June", 30}, {"July", 31}, {"August", 31}, 
        {"September", 30}, {"October", 31}, {"November", 30}, {"December", 31}
    };
    
    // Printing the table
    std::cout<<"\nTABLE USING STRUCTURES\n\n";
    std::cout << "Month\t\tDays" << std::endl;
    for (int i = 0; i < 12; i++) {
       std:: cout << months[i].name << "\t\t" << months[i].day <<std:: endl;
    }
    
    return 0;
}