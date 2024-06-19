#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int x = 2;
    int y = 3;
    int bound = 10;
    vector<int> powerfulIntegers;

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 4; ++j) {
            int answer = (int) (pow(x, i) + pow(y, j));
            if (answer <= bound) {
                bool alreadyExist = false;
                for (int k = 0; k < powerfulIntegers.size(); ++k) {
                    if (answer == powerfulIntegers[k]) {
                        alreadyExist = true;
                        break;
                    }
                }
                if (!alreadyExist) {
                    powerfulIntegers.push_back(answer);
                }
            }
        }
    }

    cout<<"Powerful Integers up to bound "<<bound<<" is = { ";
    for (int i = 0; i < powerfulIntegers.size(); ++i) {
        cout << powerfulIntegers[i] << " ";
    }
    cout<<"}";
}
