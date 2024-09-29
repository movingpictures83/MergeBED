#ifndef MERGEBEDPLUGIN_H
#define MERGEBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class MergeBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "MergeBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
