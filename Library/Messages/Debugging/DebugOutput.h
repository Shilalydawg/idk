#ifdef DEBUG_OUTPUT_H
#define DEBUG_OUTPUT_H

//stdlib includes
#include <string.h>
#include <fstream>

//Local Vars
#include "../External/ExternalMessage.h"
#include "../Internal/InternalMessage.h"

namespace Messages {
    class DebugOutput {
        private:
            string debugMsg;
            string errMessage;
            string errType;
            string errState;
            
            string dataVal;
            bool debugStatus;
            
            bool msg_isEmpty();
            string buildDebugMessage(string msg);
        public:
            
            void debugPrint(string intMsg, string extMsg);
    };
}

#endif