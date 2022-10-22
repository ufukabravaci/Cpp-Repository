#include <iostream>
#include <vector>

using namespace std;

void add_number (std::vector <int> &addvec)
{
        int num {};
        cout << "Please enter the number that you want to add :" << endl ;
        cin >> num ;
        addvec.push_back(num);
        cout << num << " added to your list!\n\n";
}

void print_num (std::vector <int> &printvec)
{
            if (printvec.size() == 0)
                cout << "Your list is empty. Please add a number first!\n";
            else
            {
                cout << "Your list = [ " ;
                for(size_t i{}; i<printvec.size(); i++ )
                {
                    cout << printvec.at(i) << " " ;
                }
                cout << "]" <<endl ;
            }
}

void mean (std::vector <int> &mean)
{
    if (mean.size() == 0)
            {
                cout << "There are no numbers in your list ! Please add some numbers first!\n";
            }
            else
            {
                int counter{} , sum{};
                for(size_t i{}; i<mean.size(); i++)
                {
                    sum += mean.at(i);
                    counter++;
                }
            cout << "The mean of numbers are " << sum/counter << endl;
            }
}

void smallest (std::vector <int> &smallest)
{
    if (smallest.size() == 0)
            {
                cout << "There are no numbers in your list ! Please add some numbers first!\n";
            }
            else
            {
               int min_index{};
                for(size_t i{} ; i<smallest.size() ; i++)
            {
                if (smallest.at(i) < smallest.at(min_index))
                    min_index = i ;
            }
            cout << "Minumum number is " << smallest.at(min_index) << endl;
            }
}

void largest (std::vector <int> &largest)
{




    if (largest.size() == 0)
            {
                cout << "There are no numbers in your list ! Please add some numbers first!\n";
            }
            else
            {
                int max_index{0};
            for(size_t i=1 ; i<largest.size() ; i++)
                {
                if(largest.at(i) > largest.at(max_index))
                max_index = i ;
                }
            cout << "Maximum number is " << largest.at(max_index) << endl;
            }
}
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
            add_number (numbers) ;
        }
        break;
    case 'P' :
    case 'p' :
        {
            print_num (numbers) ;
        }

        break;
    case 'M' :
    case 'm' :
        {
            mean(numbers) ;
        }
        break;
    case 'S' :
    case 's' :
        {
            smallest(numbers) ;
        }
        break;
    case 'L' :
    case 'l' :
        {
            largest(numbers) ;
        }
        break;
    case 'Q' :
    case 'q' :
        {
        cout << "Successfully Ended!\n\n";
        }

    default :
        cout << "Unknown selection ! Please try again ... " << endl;
        break;

    }

    } while( (selection != 'Q') && (selection != 'q') );

    return 0;
}
