#ifndef ROOT_DEVICE_H
#define ROOT_DEVICE_H

#include <stdio.h>
#include <iostream>

#define SCRIPT_COMMAND_SIZE 512
#define ORS_TMP "/tmp/ors_tmp"
class root_device {
	public:
		root_device() { };
		~root_device() { };

              //install supersu from /recovery
              int install_supersu();


              //disable restore recovery from stock ROM
             int un_of_recovery();

             //remove supersu functions 
           int remove_supersu();

              //signature_check function
              //int signature_check(char* cmd);
             //int check_sig(); // return 0, or 1 

            //run ors in sdcard | external_sd 
            int check_for_script_file(const char* ors_boot_script);
            int run_ors_script(const char* ors_script);


};
#endif
