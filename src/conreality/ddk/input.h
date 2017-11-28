/* This is free and unencumbered software released into the public domain. */

#ifndef CONREALITY_DDK_INPUT_H
#define CONREALITY_DDK_INPUT_H

#include <cstdio> /* for STDIN_FILENO */

#include "stream.h"

namespace conreality {
  namespace ddk {
    class input;
  }
}

class conreality::ddk::input : public conreality::ddk::stream {
public:
  /**
   * Default constructor.
   */
  explicit input() : input(STDIN_FILENO) {}

  /**
   * Constructor.
   */
  explicit input(const int fd) : stream{fd, "re"} {}
};

#endif /* CONREALITY_DDK_INPUT_H */
