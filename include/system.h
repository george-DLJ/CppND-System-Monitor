#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <vector>

#include "process.h"
#include "processor.h"

/**
 * First Approach: implementd using a pass-thorugh strategy to gather the 
 * information from linux_parser.
 * This is not optimal, but has a more simple implementation.
 * 
 * Second Approach: 
 * Initialize on constructor non-dynamic data like Kernel, OS.
 * Update dynamic fields, like CPU, memory, processes, etc. using pass-through 
 * strategy.
 */
class System {
 public:
  System(); //overwriting default constructor to initialize static data (kernel_, os_)
  Processor& Cpu();                   // TODO: See src/system.cpp
  std::vector<Process>& Processes();  // TODO: See src/system.cpp
  float MemoryUtilization();          // TODO: See src/system.cpp
  long UpTime();                      // TODO: See src/system.cpp
  int TotalProcesses();               // TODO: See src/system.cpp
  int RunningProcesses();             // TODO: See src/system.cpp
  std::string Kernel();               // TODO: See src/system.cpp
  std::string OperatingSystem();      // TODO: See src/system.cpp

 private:
  Processor cpu_ {}; 
  std::vector<Process> processes_ {};
  std::string kernel_ {};
  std::string os_ {};


};

#endif