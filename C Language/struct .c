#include <stdio.h>

struct address {
    int pin;
    int house;
};

struct employee {
    int employee_id;
    int salary ;
    char name[72];
    struct address addr;
};

int main() {
    struct employee k[3]= {
        {120,2400000,"bhumesh sharma",{1234, 54}},
        {234,450000,"armaan sharma",{2354,45}},
        {345,74000,"rahul sharma",{286,76}},
    };
  for (int i=0;i<3;i++){
    printf("employee_id=%d,salary=%d, name=%s, pincode=%d, house=%d\n\n\n",
           k[i].employee_id,k[i].salary, k[i].name, k[i].addr.pin, k[i].addr.house);}

    return 0;
}