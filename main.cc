#include "hb-ot-shape-complex-use-private.hh"
#include "hb-ot-shape-complex-use-machine.hh"

int
main (int argc, const char *argv[])
{
  argc--;
  argv++;
  unsigned int count = argc;

  hb_codepoint_t chars[count];
  unsigned char category[count];

  for (unsigned int i = 0; i < argc; i++)
    chars[i] = strtoul (argv[i], nullptr, 16);

  for (unsigned int i = 0; i < argc; i++)
    category[i] = hb_use_get_category (chars[i]);

  find_syllables (category, count);
}
