#include "lvgl.h"
#include "gui/gui.h"

#include "hardware/hardware.h"
#include "hardware/powermgm.h"

#include "app/example_app/example_app.h"

#if defined( NATIVE_64BIT )
    /**
     * for non arduino
     */                 
    void setup( void );
    void loop( void );

    int main( void ) {
        setup();
        while( 1 ) { loop(); };
        return( 0 );
    }
#endif // NATIVE_64BIT

void setup() {
    /**
     * hardware setup
     */
    hardware_setup();
    /**
     * gui setup
     */
    gui_setup();
    /**
     * apps here
     */
//    osmmap_app_setup();
//    weather_app_setup();
//    stopwatch_app_setup();
//    alarm_clock_setup();
//    activity_app_setup();
//    calendar_app_setup();
//    mail_app_setup();
//    gps_status_setup();
//    IRController_setup();
//    sailing_setup();
//    osmand_app_setup();
//    fxrates_app_setup();
//    powermeter_app_setup();
    example_app_setup();
//    FindPhone_setup();
//    wifimon_app_setup();
//    calc_app_setup();
//    kodi_remote_app_setup();
    /**
     * post hardware setup
     */
    hardware_post_setup();
}

void loop(){
    powermgm_loop();
}