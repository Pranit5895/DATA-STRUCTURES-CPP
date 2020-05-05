#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Queue {
 public:
  // Initialize queue of maximum size 'capacity'
  explicit Queue(size_t capacity) : entries_(capacity) {}

