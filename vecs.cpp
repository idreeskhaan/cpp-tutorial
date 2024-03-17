#include <iostream>
#include <vector>
#include <fstream>
#include <string>


int main(){

    std::vector<std::string> vec;
    std::string str;
    std::ifstream file_hdl("data.txt"); //read file

    while (getline(file_hdl, str)){  //get entire file line-by-line without omitting spaces.
        vec.push_back(str);
    }

    for (std::string i : vec){

        std::cout << i << std::endl;
    }
    file_hdl.close(); //close file handler


    return 0;
}