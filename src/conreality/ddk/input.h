/* This is free and unencumbered software released into the public domain. */

#ifndef CONREALITY_DDK_INPUT_H
#define CONREALITY_DDK_INPUT_H

namespace conreality {
  namespace ddk {
    class input;
  }
}

class conreality::ddk::input {
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

#endif /* CONREALITY_DDK_INPUT_H */
