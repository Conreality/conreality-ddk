/* This is free and unencumbered software released into the public domain. */

#ifndef CONREALITY_DDK_STREAM_H
#define CONREALITY_DDK_STREAM_H

namespace conreality {
  namespace ddk {
    class stream;
  }
}

class conreality::ddk::stream {
protected:
  int _fd;

public:
  bool is_closed() const {
    return !is_open();
  }

  bool is_open() const {
    return true; // TODO
  }
};

#endif /* CONREALITY_DDK_STREAM_H */
