#include <iostream>
#include <vector>

using namespace std;

int main()
{
   char selection {};
   vector <int> numbers{};
    do
    {
    cout << "\nA - Add a number !"<< endl;
    cout << "P - Print numbers !"<< endl;
    cout << "M - Display mean of the numbers !"<< endl;
    cout << "S - Display smallest number !"<< endl;
    cout << "L - Display largest number !"<< endl;
    cout << "Q - Quit !"<< endl;
    cout << "\nEnter your choice!" ;
    cin >> selection;

    switch (selection)
    {

    case 'A' :
    case 'a' :
        {
            int num {};
            cout << "Please enter the number that you want to add :" << endl ;
            cin >> num ;
            numbers.push_back(num);
            cout << num << " added to your list!\n\n";
        }
        break;
    case 'P' :
    case 'p' :
        {
            if (numbers.size() == 0)
                cout << "Your list is empty. Please add a number first!\n";
            else
            {
                cout << "Your list = [ " ;
                for(size_t i{}; i<numbers.size(); i++ )
                {
                    cout << numbers.at(i) << " " ;
                }
                cout << "]" <<endl ;
            }

        }
        break;
    case 'M' :
    case 'm' :
        {
            if (numbers.size() == 0)
            {
                cout << "There are no numbers in your list ! Please add some numbers first!\n";
            }
            else
            {
                int counter{} , sum{};
                for(size_t i{}; i<numbers.size(); i++)
                {
                    sum += numbers.at(i);
                    counter++;
                }
            cout << "The mean of numbers are " << sum/counter << endl;
            }
        }
        break;
    case 'S' :
    case 's' :
        {
            if (numbers.size() == 0)
            {
                cout << "There are no numbers in your list ! Please add some numbers first!\n";
            }
            else
            {
               int min_index{};
                for(size_t i{} ; i<numbers.size() ; i++)
            {
                if (numbers.at(i) < numbers.at(min_index))
                    min_index = i ;
            }
            cout << "Minumum number is " << numbers.at(min_index) << endl;
            }

        }
        break;
    case 'L' :
    case 'l' :
        {
            if (numbers.size() == 0)
            {
                cout << "There are no numbers in your list ! Please add some numbers first!\n";
            }
            else
            {
                int max_index{0};
            for(size_t i=1 ; i<numbers.size() ; i++)
                {
                if(numbers.at(i) > numbers.at(max_index))
                max_index = i ;
                }
            cout << "Maximum number is " << numbers.at(max_index) << endl;
            }

        }
        break;
    case 'Q' :
    case 'q' :
        {
        return 0;
        }

    default :
        cout << "Unknown selection ! Please try again ... " << endl;
        break;

    }

    } while( (selection != 'Q') && (selection != 'q') );

    return 0;
}
