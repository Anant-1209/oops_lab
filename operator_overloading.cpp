#include <iostream>
#include <cstring>
using namespace std;

class loc
{
    int latitude, longitude;

public:
    void set(int lt, int lg)
    {
        latitude = lt;
        longitude = lg;
    }

    void get()
    {
        cout << endl;
        cout << "Latitude:" << latitude << endl;
        cout << "Longitude:" << longitude << endl;
    }

    loc operator+(loc op);
    loc operator-(loc op);
    loc operator++();
    loc operator==(loc op);
};

loc loc::operator+(loc ob)
{
    loc temp;
    temp.latitude = ob.latitude + latitude;
    temp.longitude = ob.longitude + longitude;
    return temp;
}

loc loc::operator-(loc ob)
{
    loc temp;
    temp.latitude = ob.latitude - latitude;
    temp.longitude = ob.longitude - longitude;
    return temp;
}

loc loc::operator++()
{
    ++longitude;
    ++latitude;
    return *this;
}

loc loc::operator==(loc op)
{
    if (op.longitude == longitude && op.latitude == latitude)
    {
        cout << "Equal" << endl;
    }
    else

        cout << "Not equal " << endl;
}
int main()
{
    int n;

    cout << "Before operator overloading" << endl;

    loc ob, ob2;
    ob.set(10, 20);
    ob2.set(10, 30);
    ob.get();
    ob2.get();

    while(true)
    {
        cout << "1) +" << endl;
        cout << "2) -" << endl;
        cout << "3) ++" << endl;
        cout << "4) ==" << endl;

        cout << "Which overloading you want to perform ?" << endl;
        cin>>n;

        cout << "After overloading" << endl;

        switch (n)
        {
        case 1:
        {
            ob = ob + ob2;
            ob.get();
        }
        break;

        case 2:
        {
            ob = ob - ob2;
            ob.get();
        }
        break;

        case 3:
        {
            ++ob;
            ob.get();
        }
        break;

        case 4:
        {
            ob == ob2;
        }
        break;
        default:
            break;
        }
        cout << endl;
    }

    return 0;
}