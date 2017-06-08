//----------------------------------//
//   Handles the general runtime    //
//      and operation of the        //
//   program. This code monitors    //
//   a tick rate and is in charge   //
// of handling interrupts, calling  //
//   various high level functions   //
//     within the program, and      //
//   allocating their resources.    //
//----------------------------------//

#ifndef MAIN_HANDLER_H
#define MAIN_HANDLER_H

namespace Management {

    class MainHandler {
      private:
        //INI_Settings gameSettings;
        //timer tick object
        void tickAdvance();
        void initApp();
        void loadSettings();
        void updateSettings(vector<string> updates);
      public:
        launchMain();
    };

}
#endif