#ifndef INTERNAL_MESSAGE_H
#define INTERNAL_MESSAGE_H

#include <cstdint>

//Internal messages are primarily Strings with an ID
//Prefixed by "INTERNAL"

namespace Messages {
    
    class InternalMessage {
        private:
            int16_t msgID;
            string msgBody;
            string prefix = "_INTERNAL";
            bool failCase;
            
        public:
            
            InternalMessage();
            InternalMessage(string msg, bool passfail);
        
            int16_t assignID();
            void send();
            void recieve();
            void sendToDebug();
            
    };
}

#endif