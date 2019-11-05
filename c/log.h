/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：dlog.h
*	Author：julian
*	Date：2018-08-05
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _LOG_H
#define _LOG_H

#define HEAD				"\e["// or "\033["
#define DISPLAY_DEF			"0"
#define DISPLAY_BOLD		"1"
#define DISPLAY_BLINK		"5"
#define DISPLAY_UNLINE		"4"

#define COLOR_FT_BLACK			";30m"
#define COLOR_FT_RED			";31m"
#define COLOR_FT_GREEN			";32m"
#define COLOR_FT_YELLOW			";33m"
#define COLOR_FT_BLUE			";34m"
#define COLOR_FT_PURPLE			";35m"
#define COLOR_FT_CYAN			";36m"
#define COLOR_FT_WHITE			";37m"

#define COLOR_BG_NONE			""
#define COLOR_BG_BLACK			";40"
#define COLOR_BG_RED			";41"
#define COLOR_BG_GREEN			";42"
#define COLOR_BG_YELLOW			";43"
#define COLOR_BG_BLUE			";44"
#define COLOR_BG_PURPLE			";45"
#define COLOR_BG_CYAN			";46"
#define COLOR_BG_WHITE			";47"

#define ENDL                 "\e[0m\n"

#define log_emerg(format, ...)   printf(HEAD "5" COLOR_BG_BLACK COLOR_FT_RED"emerg: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)
#define log_alert(format, ...)   printf(HEAD DISPLAY_BOLD COLOR_BG_BLACK COLOR_FT_RED"alert: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)
#define log_crit(format, ...)    printf(HEAD DISPLAY_BOLD COLOR_BG_BLACK COLOR_FT_RED"critical: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)
#define log_err(format, ...)     printf(HEAD DISPLAY_BOLD COLOR_BG_BLACK COLOR_FT_RED"error: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)
#define log_warn(format, ...)    printf(HEAD DISPLAY_BOLD COLOR_BG_BLACK COLOR_FT_YELLOW"waring: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)

#define LOG_EN
#ifdef LOG_EN
	#define log_notice(format, ...)   printf(HEAD DISPLAY_BOLD COLOR_BG_NONE COLOR_FT_GREEN"notice: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)
	#define log_info(format, ...)     printf(HEAD DISPLAY_BOLD COLOR_BG_NONE COLOR_FT_CYAN"info: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)
    #define log_debug(format, ...)    printf(HEAD DISPLAY_BOLD COLOR_BG_YELLOW COLOR_FT_BLUE"debug: (%s %d )"format ENDL, __FILE__, __LINE__,##__VA_ARGS__)
	#define log_trace()               printf(HEAD DISPLAY_BOLD COLOR_BG_NONE COLOR_FT_PURPLE"trace: (%s %s %d )" ENDL, __FILE__, __FUNCTION__, __LINE__)
    
#else
	#define log_notice(format, ...)
	#define log_info(format, ...)
	#define log_debug(format, ...)
	#define log_trace()
#endif

static inline void log_show_style(void){
	log_emerg("emergency 9999999999999999999");
	log_alert("alert 88888888888888888888888");
	log_crit("citical 7777777777777777777777");
	log_err("error 6666666666666666666666666");
	log_warn("warn 5555555555555555555555555");
	log_notice("notice 444444444444444444444");
	log_info("info 3333333333333333333333333");
	log_debug("debug 22222222222222222222222");
	log_trace();
}
#endif //DLOG_H
