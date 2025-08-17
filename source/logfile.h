// File: logfile.h

#ifndef LOGFILE_H
#define LOGFILE_H

// --- Public Global Variables ---
extern int log_error_count; // Add this line

// --- Public Function Declarations ---
void log_message(const char *format, ...);
unsigned char open_logfile(void);

#endif // LOGFILE_H