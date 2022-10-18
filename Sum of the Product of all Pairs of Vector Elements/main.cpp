#include <iostream>
#include <vector>

// {1,2,3} = (1*2) + (1*3) + (2*3) = 11

using namespace std;

int main()
{
    int result{};
    vector <int> vec{};
    int num{};
    cout <<"Enter the number of your elements in your vector :\n" ;
    cin >> num;
    cout << "\n\n==========ELEMENTS==========\n\n" ;
    for(int i {} ; i<num ; i++ )
        {
            int element{};
            cout << "Element no " << i+1 << ":\n" ;
            cin >> element;
            vec.push_back(element) ;
        }

    for (int i{} ; i<num ; i++)
        {

            for (int j = i+1 ; j<num ; j++)
            {
                result += vec.at(i) * vec.at(j);
                cout << vec.at(i) << "*" << vec.at(j) << " = " << vec.at(i) * vec.at(j) << endl;
            }
        }

        cout << "Total = " << result << endl;

    return 0;
}
