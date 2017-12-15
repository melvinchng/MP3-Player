// ========================================= MP3_PLAYER_BEGIN ========================================
#include <cstring>
#define HIGH            1
#define LOW             0

// MP3 Decoder
/*
    MP3 decoder configurations
*/

// MP3 Pins Configuration
/*
    MP3 Pin configurations
*/

//MP3 Init Config
/* 
    MP3 Initializations
*/

//Volume
/* 
    Volume configurations
*/

//Bass
/*
    Bass configurations
*/

//Treble
/* 
    Treble configurations 
*/

//LCD
/* 
    LCD configurations
*/

//RGB
/* 
    RGB configurations
*/

// Values to be used for RGB functions
char r = rand()%10;
char g = rand()%10;
char b = rand()%10;
bool count_up_r = true;
bool count_up_g = true;
bool count_up_b = true;

// Boolean values for print functions
bool pause_track_print = false;
bool stop_track_print = false;

// Function to get the status of the buttons
bool buttons(int position){
/*
    return true or false depending on the status of the button: high & low
*/
}

// Function to write to i2c devices
void i2c_write(char add, char reg, char data){
/*
    write to i2c devices with the frame: address, register, data
*/
}

// Function to wrtie data to LCD
void lcd_write_data(char data){
/*
    lcd write data code
*/
}

// Function to write a character to LCD
void lcd_write(char data, int delay){
/*
    write a character to lcd
*/
}

// Function to set cursor for writing
void set_cursor_position(int line, int position){
    if(line == 1 ){
        // Set position to line 1 and position
    }
    else if(line == 2){
        // Set position to line 2 and position
    }
}

// Function to initialize LCD display
void lcd_display_init(){
/*
    Initialize LCD dispaly
*/
}

// Function to print a character array to LCD
void lcd_print_text(char* text){
/*
    Print character array to lcd
*/
}

// Function that print two lines of display
void lcd_print_two_lines(char* line_1, char* line_2){
	set_cursor_position(1, 0);
	lcd_print_text(line_1);
	set_cursor_position(2, 0);
	lcd_print_text(line_2);
}

// Function to clear display and write character array
void lcd_clear_and_print_text(char* text, int delay){
/*	
    clear display 
    write text to register
*/
}

// Function to initialize RGB display
void rgb_init(){
/*
    rgb backlight
*/
}
// Function to set RGB backlight
void set_rgb(char r, char g, char b){
/*
    set R, G, and B
*/
}

// Function for GPIO initialization
void initGPIO(int port, int pin, int dir){
    if(port == 0){
        // GPIO configurations Port 0
    }else if(port == 1){
    	// GPIO configurations Port 1
    }else if(port == 2){
        // GPIO configurations Port 2
    }else
        printf("This is not a valid port for intitialization\n");
}

// Function to set a pin high
void GPIOset(int port, int pin){
    if(port == 0)
        // Set port 0 and pin
    else if(port == 1)
    	// Set port 1 and pin
    else if(port == 2)
        // Set port 2 and pin
    else
        printf("Can't set. This pin does not exist\n");
}

// Function to set a pin low
void GPIOclear(int port, int pin){
    if(port == 0)
        // Clear port 0 and pin
    else if(port == 1)
        // Clear port 1 and pin
    else if(port == 2)
        // Clear port 2 and pin
    else
        printf("Can't clear. This pin does not exist\n");
}

// Function to read the status of a pin
int readPin(int port, int pin_pos){
    if(port == 0)
        return // status of port 0 and pin_pos 
    else if(port == 2)
        return // status of port 2 and pin_pos 
    else
        printf("This pin does not exist");
}

// Function to write a register to mp3
void mp3RegisterWrite(unsigned char addressbyte, unsigned char highbyte, unsigned char lowbyte){
/*
    Your code here
*/
}

// Function to set the volume of left and right channel of MP3 Decoder
void mp3VolumeSet(unsigned char leftchannel, unsigned char rightchannel){
/*
    Set left and right channel of MP3
*/
}

// Function to set the bass and treble of MP3
void mp3TrebleBassSet(unsigned char treb_and_freq, unsigned char bass_and_freq ){
/*
    Set the treble and bass
*/
}

// Function to read a register from MP3 from addressbyte
unsigned int mp3RegisterRead (unsigned char addressbyte){
/*
    Your code here
*/
    return // result
}

// A function that set the RGB so the color changes randomly
void rgb_random(void * p){
    while(1){
        if(count_up_r)
            r = r+rand()%10;
        if(count_up_g)
            g = g+rand()%10;
        if(count_up_b)
            b = b+rand()%10;
        if(!count_up_r)
            r = r-rand()%10;
        if(!count_up_g)
            g = g-rand()%10;
        if(!count_up_b)
            b = b-rand()%10;

        if(r <= 0x0F)
            count_up_r = true;
        if(g <= 0x0F)
            count_up_g = true;
        if(b <= 0x0F)
            count_up_b = true;
        if(r >= 0xF0)
            count_up_r = false;
        if(g >= 0xF0)
            count_up_g = false;
        if(b >= 0xF0)
            count_up_b = false;

        set_rgb(r, g, b);
        delay_ms(rand()%50);
    }
}

// Function to turn on and off LCD
void led_set(bool led_1, bool led_2, bool led_3, bool led_4, bool on){
	if(led_1 && on)
		// turn on LED 1
	else
		// turn off LED 1

	if(led_2 && on)
		// turn on LED 2
	else
		// turn off LED 2

	if(led_3 && on)
		// turn on LED 3
	else
		// turn off LED 3

	if(led_4 && on)
	    // turn on LED 4
	else
		// turn off LED 4
}

void pageLed(void * p){
	while(1){
        if(buttons(1)){
            page_number++;
            if(page_number > 4)
                page_number = 1;
        }

        if(page_number == 1){
			led_set(true, false, false, false, true);

			char menu1[] = "1.PgUp 2.Pause";
			char menu2[] = "3.Stop 4.Repeat";

			lcd_write(CLEAR_DISPLAY, 50);
			lcd_print_two_lines(menu1, menu2);

			while(!buttons(1)){
				if(buttons(2)){
					if(pause_track_print){
						lcd_clear_and_print_text("Song Paused", 1000);
						lcd_print_two_lines(menu1, menu2);
						pause_track_print = false;
					}else if(!pause_track_print ){
						lcd_clear_and_print_text("Song Playing", 1000);
						lcd_print_two_lines(menu1, menu2);
					}
				}else if (buttons(3)){
					if(stop_track_print){
						lcd_clear_and_print_text("Song Stopped", 1000);
						lcd_print_two_lines(menu1, menu2);
						stop_track_print = false;
					}else if(!stop_track_print ){
						lcd_clear_and_print_text("Song Playing", 1000);
						lcd_print_two_lines(menu1, menu2);
					}
				}else if (buttons(4)){
					if(!repeat_track){
						lcd_clear_and_print_text("Repeat On", 1000);
						lcd_print_two_lines(menu1, menu2);
					}else{
						lcd_clear_and_print_text("Repeat Off", 1000);
						lcd_print_two_lines(menu1, menu2);
					}
                }
			}
		}else if(page_number == 2){
			led_set(true, true, false, false, true);

			char menu1[] = "1.PgUp 2.Prev";
			char menu2[] = "3.Next 4.FastFwd";

			// clear display
			lcd_print_two_lines(menu1, menu2);

			while(!buttons(1)){
				if(buttons(2) || buttons(3)){
					lcd_clear_and_print_text(trackName, 3000);
					lcd_print_two_lines(menu1, menu2);
				}else if(buttons(4)){
					lcd_clear_and_print_text("Fast Forwarding", 3000);
					lcd_write(CLEAR_DISPLAY,0);
					lcd_print_two_lines(menu1, menu2);
				}
			}

        }else if(page_number == 3){
			led_set(true, true, true, false, true);
			// clear display

			char menu1[] = "1.PgUp  2.Bass ";
			char menu2[] = "3.Treb   4.Vol  ";

			switch(bass_level){
				case 0:	menu1[15] = '0';    break;
				case 1:	menu1[15] = 'M';    break;
				case 2:	menu1[15] = 'H';    break;
			}

			switch(treb_level){
				case 0:	menu2[7] = '0';		break;
				case 1:	menu2[7] = 'L';		break;
				case 2: menu2[7] = 'M';     break;
				case 3:	menu2[7] = 'H';     break;
			}

			snprintf(&menu2[15], 4, "%d", volume_display);
			lcd_print_two_lines(menu1, menu2);

			while(!buttons(1)){
				if(buttons(2)){
					set_cursor_position(1,15);
					switch(bass_level){
						case 0:	lcd_print_text("0");    break;
						case 1:	lcd_print_text("M");    break;
						case 2:	lcd_print_text("H");	break;
					}
				}
				else if(buttons(3)){
					set_cursor_position(2, 7);
					switch(treb_level){
						case 0:	lcd_print_text("0");    break;
						case 1:	lcd_print_text("L");    break;
						case 2:	lcd_print_text("M");    break;
						case 3:	lcd_print_text("H");    break;
					}
				}
				else if(buttons(4)){
					set_cursor_position(2,15);
					switch(volume_display){
						case 1:	lcd_print_text("1");    break;
						case 2:	lcd_print_text("2");    break;
						case 3:	lcd_print_text("3");    break;
						case 4:	lcd_print_text("4");    break;
						case 5:	lcd_print_text("5");	break;
                    }
                }
			}
        }else if (page_number == 4){
        	led_set(true, true, true, true, true);

        	char menu1[] = "Game Mode <3";
			char menu2[] = "Press 2 to start";

			lcd_write(CLEAR_DISPLAY,50);
			lcd_print_two_lines(menu1, menu2);

			while(!buttons(1))
				delay_ms(1);
        }
	}
}

class mp3_lab : public scheduler_task
{
    private:

    public:
        mp3_lab(): scheduler_task("mp3_lab", 4096, PRIORITY_LOW) { /* constructor code */ }

        bool init(void){        // only run once
            //Initialize INT generators
            /* 
                use initGPIO(port, pin, dir) function
                
                configure bass, treble volume, start button for game
            */
            

            //initGPIO(PORT, PIN, LEVEL);
            /* 
                use initGPIO(port, pin, dir) function
                
                configure XDCS, DREQ, XCS
            */
            
            //Initialize buttons
            /*
                use initGPIO(port, pin, dir) function

                initalize button 1, 2, 3, and 4
            */
            
            //initialize LEDs for pages
            /*
                use initGPIO(port, pin, dir) function

                initalize led 1, 2, 3, and 4
            */            
            
            //Initialize VS1053 chip
            /*
                use GPIOset(PORT, PIN) functions

                intialize XCS, XDCS
            */
            
            //Initialize sound configurations
            /*
                use mp3VolumeSet(left, right) function
                use mp3TrebleBassSet(treble, bass) function

            */
            
            //Set VS1053 internal clock multiplier and increase SPI rate
            /*
                Set MP3 multiplier
            */

            page_number = 1;

            //Initialize LCD
            lcd_display_init();
            rgb_init();

            char text[] = " RGB MP3 Player";
            char text_2[] = "You don't say!";

            lcd_print_text(text);
            lcd_write(LINE_2, 50);
            lcd_print_text(text_2);

            return true;
        }

        bool run (void *p){
            init_track();           // play song from trackNumber; Default 1
            set_trackNumber();      // counter to increase trackNumber

            if(trackNumber > 5 || trackNumber <= 0)
                trackNumber = 1;

            return true;
        }

        void init_track()
        {
            // Read from SD
            // Track name format
            // Splice the new file number into this file name

            char result[14];

            std::memcpy( result, source, sizeof( source ) );
            std::memcpy( result + 2, trackName, sizeof( trackName ) );

            // clear display
            // print track name
            play_mp3(result); // play an mp3 based on the name
        }

        // Function to check the flag and count up and down
        int set_trackNumber(){
            if(continue_next_track && !repeat_track && !stop_track){
                trackNumber++;
                continue_next_track = false;
            }else{
                if(next_track)
                    trackNumber++;
                if(prev_track)
                    trackNumber--;

                next_track = false;
                prev_track = false;
            }

            stop_track = false;
            return trackNumber;
        }

        // 
        void play_mp3(char* fileName){

            FILE *fp;
            fp = fopen(fileName, "r"); // open a file

            uint8_t buffer[BUFFER_SIZE];

            while(!feof(fp)){
                if(!pause_track){ //Make sure nothing is send to decoder when paused
                    while((fread(&buffer, BUFFER_SIZE, 1, fp) != 0) && !next_track && !prev_track && !stop_track){
                        for(int i = 0; i < BUFFER_SIZE ; i = i+4 ){
                            while(!readPin(0, MP3_DREQ)) {
                                // Page/ Button | PB1 | PB2     | PB3   | PB4   |
                                //      1       |  +  | pause   | stop  | rpt   |
                                //      2       |  +  | prev    | next  | ff    |
                                //      3       |  +  | bass    | treb  | vol   |
                                //      4       |  +  | game    |       |       |

                                // ============= Page 1 ==============
                                // Pause and Stop are Handled by Semaphore!
                                if(buttons(4) && page_number == 1)
                                    repeat();
                                // ============= Page 2 ==============
                                else if(buttons(2) && page_number == 2)
                                    prev_track = true;
                                else if(buttons(3) && page_number == 2)
                                    next_track = true;
                                else if(buttons(4) && page_number == 2)
                                    i = i + 100;
                                // ============= Page 3 ==============
                                //Interrupt driven features
                                else if(buttons(2) && page_number == 3)
                                    bass();
                                else if(buttons(3) && page_number == 3)
                                    treble();
                                else if(buttons(4) && page_number == 3)
                                    volume();
                                // ============= Page 4 ==============
								else if(buttons(2) && page_number == 4)
									game();
                                else
                                    pause();
                            }

                            // Pull low to send data
                            // Send byte 1
                            // Send byte 2
                            // Send byte 3
                            // Send byte 4
                            // Pull high to finish sending
                        }
                    }

                    break;
                }
            }

            if(!prev_track && !next_track)
                continue_next_track = true;

            fclose(fp);
        }

        void repeat(){
            if(repeat_track)
                repeat_track = false;
            else
                repeat_track = true;
        }

        void bass(){
            //trigger interrupt to P2.7
        }

        void treble(){
            //trigger interrupt to P2.5
        }

        void volume(){
            //trigger interrupt to P2.4
        }

        bool pause(){
            // get task pointer by name
            if(buttons(2) && (page_number == 1)){
            	pause_track_print = true;
                // suspend task using the task pointer by getting task handle
                return true;
            }else if((buttons(3) && (page_number == 1))){
            	stop_track_print = true;
                stop_track = true;
                // suspend task using the task pointer by getting task handle
            }

            return false;
        }

        void game(){
        	//trigger interrupt to P2.3
        }
};

/*
    Declare bass semaphores
    Declare treble semaphores
    Declare volume semaphores
    Declare game semaphores
*/

void bass_isr(){    
/*
    Give semaphore to bass task that is sleeping on it
*/
}

void treble_isr(){
/*
    Give semaphore to treble task that is sleeping on it
*/
}

void volume_isr(){
/*
    Give semaphore to volume task that is sleeping on it
*/
}

void game_isr(){
/*
    Give semaphore to game task that is sleeping on it
*/
}

void setBass(void * p){
/*
    Set bass to off, low, medium, or high
*/
}

void setTreble(void * p){
/*
    Set treble to off, low, medium, or high
*/
}

void setVolume(void * p){
/*
    Set voume level
*/
}

void checkPlay(void * p){
    while(1){
        if((buttons(2) && (page_number == 1)) || (buttons(3) && (page_number == 1))){
            /*  
                suspend task using the task pointer by getting task handle
                resume task
            */ 
            pause_track = false;
        }
    }
}

void initInterrupts(){
    /*
        declare function pointer for Game ISR
        Enable interrupt for port

        declare function pointer for Volume ISR
        Enable interrupt for port

        declare function pointer for Treble ISR
        Enable interrupt for port

        declare function pointer for Bass ISR
    */
}

// ========================================= MP3_PLAYER_END ========================================

// ====================================== 16x2_LCD_GAME_BEGIN ======================================

// Truck Game In Arduino; Converted the code to C++ and wrote custom functions
// https://gist.github.com/thedod/715269
// http://www.instructables.com/id/Truck-Lane-a-16x2-LCD-Arduino-game/

bool start_game = false;

// Character Register
/*
    To access CG and DDRAM
*/

// Custom Character
char car_up [] =    { 0B00000, 0B01110, 0B11111, 0B01010, 0B00000, 0B00000, 0B00000, 0B00000};
char car_down[] =   { 0B00000, 0B00000, 0B00000, 0B00000, 0B01110, 0B11111, 0B01010, 0B00000};
char truck_up[] =   { 0B00000, 0B11110, 0B11111, 0B01010, 0B00000, 0B00000, 0B00000, 0B00000};
char truck_down[] = { 0B00000, 0B00000, 0B00000, 0B00000, 0B11110, 0B11111, 0B01010, 0B00000};
char crash_up[] =   { 0B10101, 0B01110, 0B01110, 0B10101, 0B00000, 0B00000, 0B00000, 0B00000};
char crash_down[] = { 0B00000, 0B00000, 0B00000, 0B10101, 0B01110, 0B01110, 0B10101, 0B00000};

const int MAXSTEPDURATION = 300;        // Start slowly, each step is 1 millisec shorter.
const int MINSTEPDURATION = 150;        // This is as fast as it gets
const int NGLYPHS = 6;                  // the glyphs will be defined starting from 1 (not 0),
const int NCARPOSITIONS = 4;            // Number of max rows
const char BLANK=32;

char car2glyphs[NCARPOSITIONS][2] =   { {1,BLANK},{2,BLANK},{BLANK,1},{BLANK,2} };
char truck2glyphs[NCARPOSITIONS][2] = { {3,BLANK},{4,BLANK},{BLANK,3},{BLANK,4}	};
char crash2glyphs[NCARPOSITIONS][2] = { {5,BLANK},{6,BLANK},{BLANK,5},{BLANK,6} };

int road_index;
int car_pos;
int step_duration;
const int ROADLEN = 15;                 // LCD width (not counting our car)
int road[ROADLEN];                      // positions of other cars
const int MAXROADPOS = 3*NCARPOSITIONS; // determines the probability of a car in a column
char line_buff[2+ROADLEN];              // aux string for drawRoad()
int crash;                              // true if crashed
int game_start_time;                    // Start Time
int game_end_time;                      // Crash Time
bool game_begin = false;

//Texts Config
const int INTRODELAY = 2000;
char INTRO1 [] =" Trucks ahead,";
char INTRO2 [] =" Drive carefully";
char crash_text [] = "Crashed after ";
char sec_text [] = "x seconds: ";

void load_custom_char(int location, char * array){
/*
    Load custom characters
*/
}

// Function to load custom characters
void load_game_char(){
    load_custom_char(1, car_up);
    load_custom_char(2, car_down);
    load_custom_char(3, truck_up);
    load_custom_char(4, truck_down);
    load_custom_char(5, crash_up);
    load_custom_char(6, crash_down);
}

// Arduino map function in C++
int map(int x, int in_min, int in_max, int out_min, int out_max){
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
 
void getSteeringWheel() {
    car_pos = map(input_value, -750, 750, 0, NCARPOSITIONS);
}

void drawRoad(){
    for (int i=0; i<2; i++) {
        if (crash)
          line_buff[0]=crash2glyphs[car_pos][i];
        else
          line_buff[0]=car2glyphs[car_pos][i];

        for (int j=0; j<ROADLEN; j++) {
            int pos = road[(j+road_index)%ROADLEN];
            line_buff[j+1] = pos>=0 && pos<NCARPOSITIONS ? truck2glyphs[pos][i] : BLANK;
        }

        set_cursor_position(i+1, 0);
        lcd_print_text(line_buff);
    }
}

void mp3Game(void* p){
    while(1){
        if(xSemaphoreTake(gamebuttonsemaphore, portMAX_DELAY)){
            crash = game_start_time = game_end_time = road_index = 0;
            step_duration = MAXSTEPDURATION;
            line_buff[1+ROADLEN] = '\0'; // null terminate it

            for (int i=0; i<NGLYPHS; i++)
              set_cursor_position(1, i+1);

            load_game_char();

            for (int i=0; i<ROADLEN; i++)
                road[i]=-1;

            lcd_display_init();
            drawRoad();

            lcd_print_two_lines(INTRO1, INTRO2);
            delay_ms(INTRODELAY);
            game_start_time = sys_get_uptime_ms()/1000; //time when game is started in sec
            game_begin = true;

            while(game_begin){
                if (!crash) {
                    getSteeringWheel();
                    crash = (car_pos==road[road_index]);
                }

                if (crash) {
                    game_end_time = sys_get_uptime_ms()/1000;

                    lcd_write(CLEAR_DISPLAY, 50);
                    drawRoad();
                    snprintf(&sec_text[11], 4, "%d", (game_end_time - game_start_time)); //game crash time
                    lcd_print_two_lines(crash_text, sec_text);

                    //clear interrupt
                    game_begin = false;
                }else {
                    int prev_pos = road[(road_index-1)%ROADLEN];
                    int this_pos = rand() % MAXROADPOS;

                    while (abs(this_pos-prev_pos)<2) // don't jam the road
                        this_pos = rand() % MAXROADPOS;

                    road[road_index] = this_pos;
                    road_index = (road_index+1)%ROADLEN;
                    drawRoad();

                    if (step_duration>MINSTEPDURATION)
                      step_duration--;  // go faster
                }
            }
        }
    }
}

// ====================================== 16x2_LCD_GAME_END ======================================