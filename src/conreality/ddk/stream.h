/* This is free and unencumbered software released into the public domain. */

#ifndef CONREALITY_DDK_STREAM_H
#define CONREALITY_DDK_STREAM_H

#include <cerrno> /* for errno */
#include <cstdio> /* for FILE, fdopen() */

namespace conreality {
  namespace ddk {
    class stream;
  }
}

class conreality::ddk::stream {
protected:
  int _fd;
  FILE* _file;

public:
  /**
   * Default constructor.
   */
  explicit stream() noexcept = delete;

  /**
   * Constructor.
   */
  explicit stream(const int fd, const char* mode)
    : _fd{fd},
      _file{fdopen(fd, mode)} {
    if (!_file) {
      // TODO: implement error handling based on errno
    }
  }

  bool is_closed() const {
    return !is_open();
  }

  bool is_open() const {
    return true; // TODO
  }
};

#endif /* CONREALITY_DDK_STREAM_H */
