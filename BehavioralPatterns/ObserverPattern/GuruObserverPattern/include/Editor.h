#ifndef EDITOR_H
#define EDITOR_H

#include <vector>
#include <memory>
#include <string>
#include <fstream>

class EventManager;

/**
 * @brief Concrete publisher
 * 
 */
class Editor
{
public:
    Editor();
    ~Editor();

    void openFile(const std::string &path);
    void saveFile();

    std::unique_ptr<EventManager> events; // event manager

private:

    std::fstream _file;
    std::string _filename;

};

#endif //EDITOR_H