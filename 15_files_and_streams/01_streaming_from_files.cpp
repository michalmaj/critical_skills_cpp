#include <iostream>
#include <fstream>

int main(){
    std::ifstream fin{"read_file.txt"};

    if(fin.fail()){
        std::cout << "Can't open the file\n";
        return -1;
    }
    int x, y;
    fin >> x >> y;
    fin.close();

    std::ofstream fout("my_output.txt");

    if(fout.fail()){
        std::cout << "Can't open the file\n";
        return -1;
    }

    fout << x + y;
    fout.close();

    return 0;
}