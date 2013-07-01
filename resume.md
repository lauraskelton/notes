ANATOLY YAKOVENKO
=================
5775 Morehouse Drive  
San Diego, CA, 92121  
(858) 853-8659  
aeyakovenko@gmail.com  


I have over 10 years of software development experience. I've done
assembly level debugging on developing hardware on an image built
from over 9m lines of code.  I am completely language agnostic,
actively use C, Haskell, Lua, and make, and I've written between
1k and 10k loc in python, bash, clojure, ruby, nemerle, and a bit
of arm and hexagon assembly.  I actively develop on Linux, osx,
windows and cygwin, and I've implemented large portions of an embedded
OS for mobile devices.  I designed a declarative object framework
in C with C++ compatible v-tables, multiple facets - weak references
and disjoint inheritance trees on a single heap node -  that fits
in less then 500 bytes of RO arm object code.  I designed a unit
test framework that simulates every exception to get near 100%
code and branch coverage. For fun I enjoy working with AI algorithms,
like back-propagation, Bayes inference, and Markov models.

EDUCATION
---------
UIUC, Bachelor of Science in Computer Science, 2003

WORK EXPERIENCE
---------------
## Engineer, Qualcomm, San Diego CA, December 2003 to Present. ###
   * 2011 - Present. Hexagon DSP SDK.
      * High performance RPC between application processor and dsp.
        10 fold reduction in latency over 3 previous implementations,
        2 patents.  Ported to Android, Windows Phone and QNX (C).
      * Module framework for dynamically loading shared objects on
        dsp. (C)
      * IDL compiler (Haskell)
   * 2005 - 2011.  BREW/BMP (mobile OS kernel developer)
      * code
         * RPC implementation for process, co-processor (with
           different instruction sets), as well as languge and
           network boundaries (C).
         * Kernel and user space service frameworks (C).
         * Device driver framework (C).
         * Byte code for low memory rpc (Haskell targeting many
           languages).
      * tools
         * IDL compiler (Haskell).
         * strace tools for on device debugging (Haskell and Lua).
         * elf manipulation tool for post build image modification
           (Lua).
         * IDL based component and test generation tool for rapid
           prototyping (Haskell + Lua).
         * module configuration tool (Lua).
      * optimizations
         * assembly optimizations for RPC invocations from user to
           kernel.
         * optimized stack usage during on demand dynamic module
           loading.
         * code generation optimizations for performance and stack
           and heap usage for the C IDL backend.
   * 2003 - 2005.  QChat, "Push to Talk" server
      * implemented network components using SIP/HTTP/RTP and
        proprietary standards (C++).
      * developed high performance logging tools to handle tens of
        thousands of transactions per second from many networked
        components (C++).

### Software Developer, Alescere LLC, Lisle IL, 2001 to 2003. ###
   * Founding member of a VoIP startup.
   * Implemented SIP and RTP protocol stacks, and server components
     for a VoIP system for small businesses  (C++).

### Research Assistant, Senior Design, UIUC, 2003 ###
   * QoS for the Apache Web server (C++).
   * Probabilistic scheduler for the Linux kernel (C).
   * roaming protocol for 80.11 networks for NetBSD (C).

### Personal Research ###
  * used and implemented and optimized, neural networks, genetic
    algorithms, markov chains, and bayes inference algorithms,
    over gigabytes of data entirely for fun  (mostly Haskell, some C).

HOBBIES
-------
   * Underwater hockey (was an alternate for 2008 world championships)
   * ironman triathlons
   * surfing
