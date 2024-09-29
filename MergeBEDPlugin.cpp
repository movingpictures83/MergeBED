#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MergeBEDPlugin.h"

void MergeBEDPlugin::input(std::string file) {
 inputfile = file;
}

void MergeBEDPlugin::run() {}

void MergeBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "mergeBed -i";
myCommand += " ";
myCommand += inputfile + " >& "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<MergeBEDPlugin> MergeBEDPluginProxy = PluginProxy<MergeBEDPlugin>("MergeBED", PluginManager::getInstance());
