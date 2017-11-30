***********************************************
Conreality Driver Development Kit (DDK) for C++
***********************************************

.. image:: https://img.shields.io/badge/license-Public%20Domain-blue.svg
   :alt: Project license
   :target: https://unlicense.org/

.. image:: https://img.shields.io/travis/conreality/conreality-ddk/master.svg
   :alt: Travis CI build status
   :target: https://travis-ci.org/conreality/conreality-ddk

|

https://ddk.conreality.org/cxx/

Installation
============

Installation from Source Code
-----------------------------

Configuring, building, and installing the library (by default, into
``/usr/local``) are all performed with the standard incantations::

   $ ./autogen.sh   # only needed for the development version from Git

   $ ./configure

   $ make

   $ sudo make install

   $ sudo ldconfig  # only on Linux

Configuration
=============

Configuring a Custom Build
--------------------------

The library is thoroughly modular. Specific header files and their
underlying function implementations can be omitted using the familiar
``./configure --disable-FEATURE`` facility provided by Autoconf.

To review the list of features, see the output of ``./configure --help``.

See Also
========

* `Conreality Hardware Abstraction Layer (HAL)
  <https://github.com/conreality/conreality-hal>`__

* `Conreality Software Development Kit (SDK) for C++
  <https://github.com/conreality/conreality-sdk>`__
