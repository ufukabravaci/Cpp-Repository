#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1 ;
    vector <int> vector2 ;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "vector1 :\n";
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size of vector1 is " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "vector2 :\n";
    cout << vector2.at(0) <<" " << vector2.at(1) << "\n";
    cout << "Size of vector2 is " << vector2.size() << endl;

    vector <vector<int>> vector_2d ;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector_2d :\n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << "\n";
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << "\n";

    vector1.at(0) = 1000;

    cout << "After the vector1(0)= 1000 vector_2d : \n";
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << "\n";
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << "\n";

    cout << "And new vector 1 is :\n";
    cout << vector1.at(0) << " " << vector1.at(1) <<"\n\n";

    return 0;
}
