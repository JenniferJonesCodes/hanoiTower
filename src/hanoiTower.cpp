/**
 * 
 * 
 * 
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace::std;

int moveTower(int disk, char source ='A', char spare = 'B', char dest = 'C'){
    if (disk == 1){
        cout << "Move Disk " << disk << " from " << source << " to " << dest << endl;
    }

    else{
        moveTower(disk-1, source, dest, spare);
        cout << "Move Disk " << disk << " from " << source << " to " << dest << endl;
        moveTower(disk-1, spare, source, dest);
    }
    return 0;
}

int main (int argc, char** argv) {

    int disk;
    cout << "Please enter a number of disks: " << endl;
    cin >> disk;
    cout << moveTower(disk)<< endl;
    
    return 0;
}