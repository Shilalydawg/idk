#include "InternalMessage.h"

namespace Messages {
    InternalMessage::InternalMessage() { }
    InternalMessage::InternalMessage(string msg, bool passfail) {
        msgBody = msg;
        failCase = passfail;
        msgID = assignID();
    }
    
    
}