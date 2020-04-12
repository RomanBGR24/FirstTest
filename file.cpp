#include <string>
#include <iostream>

struct MemoryJSON{
    std::string name;
    std::string value;
}

const std::string DEF_FILE_NAME("/proc/memory")
const std::string FILE_IN_TEXT= "Input the name of the file";

std::string InputFileName ()
{
    std::string FileName;
    std::cout<< FILE_IN_TEXT <<std::endl;
    
    std::cin>>FileName;
    if(!FileName)
    {
        return FileName;
    }
    else
    {
        return DEF_FILE_NAME;
    }
    
}

void OpenFile(std::string FileName)
{
    std::string Line;
    std::ofstream ost(FileName);
    std::getline(ost,Line);

    std::cout<<"Your first line is #"<<Line<<" #";
    return;
}