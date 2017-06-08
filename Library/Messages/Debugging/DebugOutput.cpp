#include "DebugOutput.h"

namespace Messages {
    string DebugOutput::buildDebugMessage(string msg) {
        
    }
    
    void DebugOutput::debugPrint(string intMsg, string extMsg) {
        if(!intMsg.empty() && !extMsg.empty()){
            buildDebugMessage(intMsg);
            std::cout << DebugOutput::debugMsg;
            buildDebugMessage(extMsg);
            std::cout << DebugOutput::debugMsg;
        }
        else if(!intMsg.empty() && extMsg.empty()){
            buildDebugMessage(intMsg);
            std::cout << DebugOutput::debugMsg;
        }
        else if(intMsg.empty() && !extMsg.empty()){
            buildDebugMessage(extMsg);
            std::cout << DebugOutput::debugMsg;
        }
        else{
            //Throw error saying there's no message
        }
        
    }
    
    
}