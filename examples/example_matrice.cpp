#include "../matrice.h"

using namespace std;

int main(){//TEST SEULEMENT
    vector<vector<double>> vec;
    vec.push_back(vector<double>{1,2,2,3});
    vec.push_back(vector<double>{4,5,6,6});
    vec.push_back(vector<double>{7,8,9,9});
    vec.push_back(vector<double>{7,7,9,9});
    Matrice A = Matrice(vec);
    vector<vector<double>> vec1;
    vec1.push_back(vector<double>{1,2,2});
    vec1.push_back(vector<double>{4,5,6});
    vec1.push_back(vector<double>{7,8,9});
    vec1.push_back(vector<double>{7,7,9});
    Matrice D = Matrice(vec1);
    Matrice B = Matrice().identity(4);
    Matrice C = A.inv();
    cout << C << endl;
    Matrice E = C*A;
    cout << E << endl;
    return 0;
}