/* This is free and unencumbered software released into the public domain. */

#ifndef CONREALITY_DDK_OUTPUT_H
#define CONREALITY_DDK_OUTPUT_H

#include <unistd.h> /* for STDOUT_FILENO */

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

  /**
   * Writes out a two-value tuple to this stream.
   */
  template <class T>
  void write_tuple(T value1, T value2) const {
    std::fputc('{', _file);
    write_value(value1);
    std::fputc(',', _file);
    write_value(value2);
    std::fputc('}', _file);
    std::fputc('\n', _file);
  }

  /**
   * Writes out a floating-point value to this stream.
   */
  void write_value(const double value) const {
    std::fprintf(_file, "%.2f", value);
  }
};

#endif /* CONREALITY_DDK_OUTPUT_H */
