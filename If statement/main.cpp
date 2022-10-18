#include <iostream>

using namespace std;

int main()
{
    int num{};
const int min{10};
const int max{100};

cout << "Enter an integer between " << min << " and " << max << endl;
cin >> num ;
int diff ;

if(num >= min)
{
    cout << "=========If Statement 1========" << endl;
    cout << "You entered a num greater than " << min << endl;
    cout << num << " is " << num-min << " greater than " << min << endl;

}

if(num <= max)
{
    cout << "\n\n=========If Statement 2========" << endl;
    cout << "You entered a num smaller than " << max << endl;
    cout << num << " is " << max-num << " smaller than " << max << endl;

}

if((num <= max) && (num >= min))
{
    cout << "\n\n=========If Statement 3========" << endl;
    cout << "You entered a num smaller than " << max << " and greater than " << min << endl;
    cout << num << " is " << max-num << " smaller than " << max << " and " << num-min << " greater than " << min << endl;

}
    return 0;
}
