//Container to store and maintain app settings
//  from an XML or INI file
//Only to be used by MainHandler when initializing

#ifndef APP_SETTINGS_H
#define APP_SETTINGS_H

namespace Management {
    
    struct AppSettings {
        //Settings variables
        int framerate;
        pair<int, int> resolution;
        
        //Read & Write settings to file
        void readINI();
        void readXML();
        void writeINI();
        void writeXML();
        
        //Other Functions
    };
    
}

#endif