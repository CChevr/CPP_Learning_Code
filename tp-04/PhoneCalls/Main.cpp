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

    /*
    // Q5
    Person    paul { "Paul", 3 };
    HomePhone far_phone { paul, -10 };

    const Phone& normal_phone = far_phone;
    normal_phone.ring(); // This is the voicemail of Paul. Please leave a message.
    */

    /*
    // Q6
    Person      paul { "Paul", 3 };
    MobilePhone mobile_phone { paul };

    const Phone& normal_phone = mobile_phone;
    normal_phone.ring(); // Hi! Paul on the phone.
    */

    // Q7
    /*
    Person paul { "Paul", 3 };
    Phone  normal_phone { paul }; // Doesn't compile!
    */

    // Q8
    /*
    Person    paul { "Paul", 3 };
    HomePhone far_phone { paul, -10 };

    const Phone normal_phone = far_phone;
    normal_phone.ring();
    */

    Person      paul { "Paul", 3 };
    MobilePhone mobile_phone { paul };
    mobile_phone.ring();

    return 0;
}
