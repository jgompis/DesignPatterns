#include "Editor.h"
#include "EventManager.h"

Editor::Editor(){
    events.reset(new EventManager());
}

Editor::~Editor(){
    
}

void Editor::openFile(const std::string &path){
    _filename= path;
    _file.open(_filename);
    events->notify("open", _filename);
}

void Editor::saveFile(){
    _file.close();
    events->notify("save", _filename);
}