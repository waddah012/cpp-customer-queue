
/*

customer queue implemtaton
simulation technique for behavior modeling
a line where the customer enters amd their arrival time is recorded
Example DMV line simulation

*/

#include <iostream>
#include <cstdlib>

#include <iostream>
#include <queue>
using namespace std;

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> line;
    int arrivalTime = 1;


    cout << "Customer 1 arrived at time " << arrivalTime << endl;
    line.push(1); // Front and back as mentioned in class where the front is a null pointer and back is the last element in this case 1 is both the front and back

    arrivalTime = 2;
    cout << "Customer 2 arrived at time " << arrivalTime << endl;
    line.push(2);

    arrivalTime = 3;
    cout << "Customer 3 arrived at time " << arrivalTime << endl;
    line.push(3);

    arrivalTime = 4;
    cout << "Customer 4 arrived at time " << arrivalTime << endl;
    line.push(4);

    cout << "Customer " << line.front() << " left the line \n";
    line.pop();

    while (!line.empty()) {
        int c = line.front();
        line.pop();
        cout << "Serving Customer " << c << endl;
    }

    return 0;
}
