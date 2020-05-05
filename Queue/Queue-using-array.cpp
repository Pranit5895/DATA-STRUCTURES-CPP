#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Queue {
 public:
  // Initialize queue of maximum size 'capacity'
  explicit Queue(size_t capacity) : entries_(capacity) {}
// Enqueue function
  void Enqueue(int x) {
    if (tail_ == entries_.size()) {
      // If number of elements in queue is equal to maximum capacity
      if (num_queue_elements == entries_.size()) {
        throw length_error("queue overflow");
        return;
      } else {
        // If number of elements in queue less than maximum queue size,
        // rearrange
        rotate(entries_.begin(), entries_.begin() + head_, entries_.end());
        head_ = 0, tail_ = num_queue_elements;
      }
    }

    entries_[tail_] = x;
    ++tail_, ++num_queue_elements;
  }
