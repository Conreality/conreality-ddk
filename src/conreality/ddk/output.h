/* This is free and unencumbered software released into the public domain. */

#ifndef CONREALITY_DDK_OUTPUT_H
#define CONREALITY_DDK_OUTPUT_H

#include <cstdio> /* for STDOUT_FILENO */

#include "stream.h"

namespace conreality {
  namespace ddk {
    class output;
  }
}

class conreality::ddk::output : public conreality::ddk::stream {
public:
  /**
   * Default constructor.
   */
  explicit output() : output(STDOUT_FILENO) {}

  /**
   * Constructor.
   */
  explicit output(const int fd) : stream{fd, "ae"} {}
};

#endif /* CONREALITY_DDK_OUTPUT_H */
