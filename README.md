== Build

Build it by just running:

$ make

Run it like:

$ ./main 10a00 10a10 10a01 10a10 10a01 10a01
syllable 0..1 standard_cluster
syllable 1..3 standard_cluster
syllable 3..6 standard_cluster

== Caveats

 * HarfBuzz's USE implementation might have more relaxed grammar than the
spec.

 * HarfBuzz's USE implementation currently does not support main Indic
   scripts.  While that's consistent with the spec, it might come as a
   surprise.  Apple already supports Indic scripts in USE.  We want to
   do as well.  There's an issue in HarfBuzz github for that.
