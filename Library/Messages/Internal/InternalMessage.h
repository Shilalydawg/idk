#ifndef INTERNAL_MESSAGE_H
#define INTERNAL_MESSAGE_H

#include <cstdint>
#include <ctime>

//Internal messages are primarily Strings with an ID
//Prefixed by "INTERNAL"

namespace Messages {
    
    class InternalMessage {
        private:
            string msgID;
            string msgBody;
            string prefix = "_INTERNAL";
            bool failCase;
            
        public:
            
            InternalMessage();
            InternalMessage(string msg, bool passfail);
        
            string assignID();
            void send();
            void recieve();
            void sendToDebug();
            
            
            
    };
}

#endif