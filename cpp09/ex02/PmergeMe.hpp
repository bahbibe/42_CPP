#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
#include <sys/ioctl.h>
#include <unistd.h>

bool fillContainers(std::string input, std::vector<int> &v, std::deque<int> &d);
void printContainer(std::vector<int> &v, const std::string &str);
void mergeInsertVec(std::vector<int>::iterator begin, std::vector<int>::iterator end);
void insertSortVec(std::vector<int>::iterator begin, std::vector<int>::iterator end);
void mergeInsertDeq(std::deque<int>::iterator begin, std::deque<int>::iterator end);
void insertSortDeq(std::deque<int>::iterator begin, std::deque<int>::iterator end);
void timingVec(clock_t start, clock_t end, std::vector<int> &v);
void timingDeq(clock_t start, clock_t end, std::deque<int> &d);
