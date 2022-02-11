#include "HomePhone.h"
#include "MobilePhone.h"
#include "Person.h"
#include "Phone.h"

int main()
{
    /*
    Person paul { "Paul", 3 };
    Phone  phone { paul };
    phone.ring();

    HomePhone homePhone { paul, 2 };
    homePhone.ring();
    */

    Person    paul { "Paul", 3 };
    HomePhone far_phone { paul, -10 };

    const Phone& normal_phone = far_phone;
    normal_phone.ring(); // This is the voicemail of Paul. Please leave a message.

    return 0;
}
